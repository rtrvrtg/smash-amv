<?php
/**
 * @file
 * Signer for Shov3 requests.
 */

/**
 * Sign file!
 * Only returns JSON.
 */
function shov3_file_sign() {
  if (empty($_POST)) {
    drupal_json_output(array(
      'error' => 'shov3_file_no_post', 
      'message' => t('Please submit a POST request.'),
    ));
    drupal_exit();
  }

  $f_str = FILTER_SANITIZE_STRING;
  $f_params = FILTER_FLAG_STRIP_LOW | FILTER_FLAG_STRIP_HIGH;

  $filename = filter_var($_POST['filename'], $f_str, $f_params);
  $filesize = intval($_POST['filesize']);
  $filetype = filter_var($_POST['filetype'], $f_str, $f_params);

  $triggering_element = NULL;
  if (isset($_POST['triggering_element'])) {
    $triggering_element = filter_var($_POST['triggering_element'], $f_str, $f_params);
  }

  // Set folder as nil
  $base_dir = '';

  // Get the actual form from the form cache.
  if (isset($_POST['form_build_id'])) {
    list($form, $form_state) = ajax_get_form();
    if ($form && $form_state) {
      drupal_process_form($form['#form_id'], $form, $form_state);

      // Check for an upload location and make use of it.
      if (isset($form['#' . $triggering_element . '_location'])) {
        $loc = $form['#' . $triggering_element . '_location'];
        $base_dir = trim(str_replace('s3://', '', $loc), '/');
        if (!empty($base_dir)) {
          $base_dir .= '/';
        }
      }
    }
  }
  

  // @TODO: Make filename unique somehow

  $signer = new Shov3_File_Signer();
  $signer->bucket = variable_get('amazons3_bucket', '');
  $signer->folder = $base_dir;
  $signer->name = $filename;
  $signer->size = $filesize;
  $signer->acl = variable_get('amazons3_default_acl', 'public-read');
  $signer->redirect = '';
  $signer->contentType = $filetype;
  $signer->secret = variable_get('aws_secret_key', '');

  drupal_json_output($signer->response());
  drupal_exit();
}

/**
 * Class for generating signed request data.
 */
class Shov3_File_Signer {
	var $bucket;
	var $folder;
	var $name;
  var $size;
	var $acl;
	var $redirect;
	var $contentType;
	var $secret;

	function policy() {
	  $policyContainer = array(
	  	'expiration' => date('Y-m-d\TH:m:s.000\Z', time() + 86400),
	  	'conditions' => array(
	  	  array('eq', '$bucket', $this->bucket), 
	  	  array('starts-with', '$key', $this->folder . $this->name),
	  	  array('acl' => $this->acl),
	  	  array('success_action_redirect' => $this->redirect),
	  	  array('x-amz-meta-filename' => $this->name),
	  	  array('starts-with', '$Content-Type', $this->contentType),
	  	),
	  );

	  return json_encode($policyContainer);
	}

	function signature() {
    return $this->hmacSHA1(
      $this->secret, 
      base64_encode(preg_replace('/[\r\n]/', '', $this->policy()))
    );
	}

  function response() {
    $response = array(
      'folder'      => $this->folder, 
      'name'        => $this->name,
      'mimetype'    => $this->contentType,
      'size'        => $this->size,
      'policy'      => base64_encode($this->policy()),
      'signature'   => $this->hex2B64($this->signature()),
      'destination' => 's3://' . $this->folder . $this->name,
      'redirect'    => $this->redirect,
      'acl'         => $this->acl,
      'policy_plain' => $this->policy(),
    );
    return $response;
  }

  function hmacSHA1($key, $data) {

    return hash_hmac("sha1", $data, $key);

    $blocksize = 64;
    $hashfunc = 'sha1';
    if (strlen($key) > $blocksize) {
      $key = pack('H*', $hashfunc($key));
    }
    $key = str_pad($key, $blocksize, chr(0x00));
    $ipad = str_repeat(chr(0x36), $blocksize);
    $opad = str_repeat(chr(0x5c), $blocksize);
    $hmac = pack(
      'H*',$hashfunc(
        ($key^$opad).pack(
          'H*',$hashfunc(
            ($key^$ipad).$data
          )
        )
      )
    );
    return bin2hex($hmac);
  }

  function hex2B64($str) {
    $raw = '';
    for ($i = 0; $i < strlen($str); $i += 2) {
      $raw .= chr(hexdec(substr($str, $i, 2)));
    }
    return base64_encode($raw);
  }
}


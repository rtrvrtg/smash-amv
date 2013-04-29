<?php

function shov3_file_test() {
	$path = drupal_get_path('module', 'shov3_file');
    drupal_add_js($path . '/Shov3/lib/webtoolkit.base64.js');
    drupal_add_js($path . '/Shov3/lib/sha1.js');
    drupal_add_js($path . '/Shov3/lib/jquery.md5.js');
    drupal_add_js($path . '/Shov3/shov3.js');
    drupal_add_js($path . '/test.js');
    drupal_add_js(array('Shov3File' => array(
      'key' => variable_get('aws_key', ''),
      'bucket' => variable_get('amazons3_bucket', ''),
      'folder' => '',
      'acl' => variable_get('amazons3_default_acl', 'public-read'),
    )), 'setting');

    $markup = '<h1>IMAGE DUMP!</h1>
<p>dump images in using field below. they go to S3. nuff said</p>

<div class="uploader-stuff">
  <input type="file" id="filez" onchange="runUpload();" multiple />
  <br />
  <br />
  <button id="rmsit" onclick="rmsStressTest();">rms it!</button>
  
  <span class="progress-container"></span>
</div>
  
<div id="crap"></div>
<div id="debug"></div>';

    return $markup;
}

function shov3_file_signtest() {
  module_load_include('inc', 'shov3_file', 'shov3_file.ajax');

  $markup = '';

  $test = function($key, $content) {
    $signer = new Shov3_File_Signer();
    
    $content = utf8_encode($content);
    
    $output = '';
    // $output .= '<p>' . bin2hex($content) . '</p>';
    $output .= '<p>' . $signer->hex2B64($signer->hmacSHA1($key, $content)) . '</p>';
    $output .= '<hr />';
    return $output;
  };

  $markup .= '<p> 6fULxJnmQJMsN4SUgFj1VU5Z7Vs= </p>';
  $markup .= $test('fake-secret-key', 'GET\n\n\nFri, 05 May 2006 17:36:09 +0000\n/testbucket/testkey');

  $markup .= '<p> ITBItX/f82A+j/wb+fNG8kFxoJg= </p>';
  $markup .= $test('fake-secret-key', 'PUT\n\n\nFri, 05 May 2006 17:37:50 +0000\n/testbucket/testkey');

  $markup .= '<p> BINP7wlNsTZMKyykrHSggi/MA8M= </p>';
  $markup .= $test('fake-secret-key', 'PUT\n\ntext/html\nFri, 05 May 2006 17:41:29+0000\nx-amz-acl:public-read\n/testbucket/testkey');

  return $markup;
}


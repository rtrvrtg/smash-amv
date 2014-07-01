<?php
/**
 * @file
 * amv_base.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function amv_base_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Vote in the People\'s Choice AMV Competition',
  'log' => '',
  'status' => 0,
  'comment' => 0,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '4980c1e7-cb49-4413-85ac-1ebeeee6736f',
  'ds_switch' => '',
  'type' => 'webform',
  'language' => 'und',
  'created' => 1404216582,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1723fa15-f773-450d-85f0-c9414f574087',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>You\'ve seen the AMVs, now\'s your chance to have your say about which ones are the best.</p>
<p>Enter your email address and your top three choices below. We\'ll count all the votes up and announce the winner at <em>SMASH! 2014</em>.</p>',
        'summary' => '',
        'format' => 'html',
        'safe_value' => ' <p>You\'ve seen the AMVs, now\'s your chance to have your say about which ones are the best.</p>
<p>Enter your email address and your top three choices below. We\'ll count all the votes up and announce the winner at <em>SMASH! 2014</em>.</p> ',
        'safe_summary' => '  ',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'webform' => array(
    'nid' => 260,
    'confirmation' => 'Thanks for submitting your choices. We\'ll announce the winner at <em>SMASH! 2014</em>!',
    'confirmation_format' => 'html',
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'teaser' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(
      1 => array(
        'nid' => 260,
        'eid' => 1,
        'email' => 'amv@smash.org.au',
        'subject' => 'default',
        'from_name' => 'SMASH! AMV Site',
        'from_address' => 'amv@smash.org.au',
        'template' => 'default',
        'excluded_components' => array(),
        'html' => 0,
        'attachments' => 0,
      ),
    ),
    'components' => array(
      1 => array(
        'nid' => 260,
        'cid' => 1,
        'pid' => 0,
        'form_key' => 'your_email_address',
        'name' => 'Your email address',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'description' => 'We\'d like to make sure that all votes are fair and unique, so we require your email address. We won\'t use it for any purpose other than tabulating votes in the People\'s Choice AMV competition.',
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 1,
          'conditional_operator' => '=',
          'width' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 0,
        'page_num' => 1,
      ),
      2 => array(
        'nid' => 260,
        'cid' => 2,
        'pid' => 0,
        'form_key' => '1_choice',
        'name' => '#1 Choice',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => '158| Runaway Garden
159|Electroheart
160|Come and Get It
161|With a Capital T
163|Birds and the Bees
164|Telus Commercial Panda Parody
165|All You Can Be
166|THIS VIDEO WAS (NOT) ENTERED INTO DRAMA
167|Hot Commodity
168|Samson 
',
          'options_source' => 'active_amvs-webform_select_1',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 1,
        'page_num' => 1,
      ),
      3 => array(
        'nid' => 260,
        'cid' => 3,
        'pid' => 0,
        'form_key' => '2_choice',
        'name' => '#2 Choice',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => '158| Runaway Garden
159|Electroheart
160|Come and Get It
161|With a Capital T
163|Birds and the Bees
164|Telus Commercial Panda Parody
165|All You Can Be
166|THIS VIDEO WAS (NOT) ENTERED INTO DRAMA
167|Hot Commodity
168|Samson 
',
          'options_source' => 'active_amvs-webform_select_1',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 2,
        'page_num' => 1,
      ),
      4 => array(
        'nid' => 260,
        'cid' => 4,
        'pid' => 0,
        'form_key' => '3_choice',
        'name' => '#3 Choice',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => '158| Runaway Garden
159|Electroheart
160|Come and Get It
161|With a Capital T
163|Birds and the Bees
164|Telus Commercial Panda Parody
165|All You Can Be
166|THIS VIDEO WAS (NOT) ENTERED INTO DRAMA
167|Hot Commodity
168|Samson 
',
          'options_source' => 'active_amvs-webform_select_1',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 3,
        'page_num' => 1,
      ),
    ),
  ),
  'name' => 'it-admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-07-01 22:09:42 +1000',
);
  return $nodes;
}

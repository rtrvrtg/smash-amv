<?php
/**
 * @file
 * amv_base.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function amv_base_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-amv-body'
  $field_instances['node-amv-body'] = array(
    'bundle' => 'amv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please add a short description about your AMV. This will help us know and understand your AMV more and can assist us in our judging.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'revision' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-amv-field_amv_group'
  $field_instances['node-amv-field_amv_group'] = array(
    'bundle' => 'amv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If you are part of an AMV Group, please add it in! If your AMV gets shown at the event, the group you are associated with will gain exposure.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'revision' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_amv_group',
    'label' => 'AMV Group',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-amv-field_artist'
  $field_instances['node-amv-field_artist'] = array(
    'bundle' => 'amv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List the artists who performed the music sources used in your AMV. Enter their names separated by commas; if their names contain a comma, add them in quotes. eg. "Crosby, Stills & Nash" or "They Shoot Horses, Don\'t They"',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 6,
      ),
      'revision' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_artist',
    'label' => 'Artist',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-amv-field_country'
  $field_instances['node-amv-field_country'] = array(
    'bundle' => 'amv',
    'default_value' => array(
      0 => array(
        'iso2' => 'AU',
      ),
    ),
    'deleted' => 0,
    'description' => 'It would be great to mention where you come from! This helps us know the demographics of the entrants for this AMV competition!',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'countries',
        'settings' => array(),
        'type' => 'country_default',
        'weight' => 13,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'countries',
        'settings' => array(),
        'type' => 'country_default',
        'weight' => 10,
      ),
      'revision' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'countries',
        'settings' => array(),
        'type' => 'country_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_country',
    'label' => 'Country',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-amv-field_email_address'
  $field_instances['node-amv-field_email_address'] = array(
    'bundle' => 'amv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'We need your E-mail address to contact you if you win an award in the competition, or any other general enquiries. In the case of group submission, one e-mail address will do.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 12,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
      'revision' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email_address',
    'label' => 'Email Address',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-amv-field_entrant_names'
  $field_instances['node-amv-field_entrant_names'] = array(
    'bundle' => 'amv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter your full name in the following text field. If there are more entrants, a new line will show for each team member that you want to add, so please enter everyone\'s names. Please note that if your AMV(s) entered wins a category and/or award, and it is a group submission, we will use the first name shown and send it to that person.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'revision' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_entrant_names',
    'label' => 'Full name of entrant/s',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-amv-field_entrant_nicknames'
  $field_instances['node-amv-field_entrant_nicknames'] = array(
    'bundle' => 'amv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If you want to use another name other than your full name for use in representing yourself in the competition, please add that name here. If not, then your full name will be used instead. If you are entering as a team, new lines will appear to let you enter all the nicknames of your team members.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'revision' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_entrant_nicknames',
    'label' => 'Preferred names or Nicknames',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-amv-field_rating'
  $field_instances['node-amv-field_rating'] = array(
    'bundle' => 'amv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'sites/all/modules/contrib/fivestar/widgets/oxygen/oxygen.css',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 3,
      ),
      'revision' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'sites/all/modules/contrib/fivestar/widgets/oxygen/oxygen.css',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rating',
    'label' => 'Rating',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 0,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-amv-field_series'
  $field_instances['node-amv-field_series'] = array(
    'bundle' => 'amv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List all the anime sources used in your AMV, separated by comma. If you\'re submitting a title with a comma in it, please wrap it in quotes. eg. "Kumo no Mukou, Yakusoku no Basho", "Now & Then, Here & There"',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 7,
      ),
      'revision' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_series',
    'label' => 'Anime used in AMV',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-amv-field_song'
  $field_instances['node-amv-field_song'] = array(
    'bundle' => 'amv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List all the songs/audio sources that were used in your AMV. A new line will appear for each song/audio source used.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'revision' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_song',
    'label' => 'Music/Audio Source',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-amv-field_video_display'
  $field_instances['node-amv-field_video_display'] = array(
    'bundle' => 'amv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'mediaelement_sourced_link',
        'settings' => array(
          'controls' => 1,
          'download_link' => 0,
          'download_text' => 'Download',
          'height' => 400,
          'type' => 'video/mp4',
          'width' => '100%',
        ),
        'type' => 'mediaelement_sourced_video',
        'weight' => 0,
      ),
      'revision' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'mediaelement_sourced_link',
        'settings' => array(
          'controls' => 1,
          'download_link' => 0,
          'download_text' => 'Download',
          'height' => 400,
          'type' => 'video/mp4',
          'width' => '100%',
        ),
        'type' => 'mediaelement_sourced_video',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_display',
    'label' => 'Video Display',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-amv-field_video_source'
  $field_instances['node-amv-field_video_source'] = array(
    'bundle' => 'amv',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please put the link to the uploading site where you have uploaded your AMV. <strong>Note:</strong> No YouTube links will be accepted. <br />
We recommend that you post it on one of the following services: <a href="http://mediafire.com" target="_blank">MediaFire</a>, <a href="http://sendspace.com" target="_blank">SendSpace</a>, <a href="http://uploading.com" target="_blank">Uploading.com</a>. Please ensure that your video file follows the <a href="/rules" target="_blank">AMV Encoding Guidelines</a>.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
      'revision' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_source',
    'label' => 'Link to Video File',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('AMV Group');
  t('Anime used in AMV');
  t('Artist');
  t('Country');
  t('Description');
  t('Email Address');
  t('Full name of entrant/s');
  t('If you are part of an AMV Group, please add it in! If your AMV gets shown at the event, the group you are associated with will gain exposure.');
  t('If you want to use another name other than your full name for use in representing yourself in the competition, please add that name here. If not, then your full name will be used instead. If you are entering as a team, new lines will appear to let you enter all the nicknames of your team members.');
  t('It would be great to mention where you come from! This helps us know the demographics of the entrants for this AMV competition!');
  t('Link to Video File');
  t('List all the anime sources used in your AMV, separated by comma. If you\'re submitting a title with a comma in it, please wrap it in quotes. eg. "Kumo no Mukou, Yakusoku no Basho", "Now & Then, Here & There"');
  t('List all the songs/audio sources that were used in your AMV. A new line will appear for each song/audio source used.');
  t('List the artists who performed the music sources used in your AMV. Enter their names separated by commas; if their names contain a comma, add them in quotes. eg. "Crosby, Stills & Nash" or "They Shoot Horses, Don\'t They"');
  t('Music/Audio Source');
  t('Please add a short description about your AMV. This will help us know and understand your AMV more and can assist us in our judging.');
  t('Please enter your full name in the following text field. If there are more entrants, a new line will show for each team member that you want to add, so please enter everyone\'s names. Please note that if your AMV(s) entered wins a category and/or award, and it is a group submission, we will use the first name shown and send it to that person.');
  t('Please put the link to the uploading site where you have uploaded your AMV. <strong>Note:</strong> No YouTube links will be accepted. <br />
We recommend that you post it on one of the following services: <a href="http://mediafire.com" target="_blank">MediaFire</a>, <a href="http://sendspace.com" target="_blank">SendSpace</a>, <a href="http://uploading.com" target="_blank">Uploading.com</a>. Please ensure that your video file follows the <a href="/rules" target="_blank">AMV Encoding Guidelines</a>.');
  t('Preferred names or Nicknames');
  t('Rating');
  t('Video Display');
  t('We need your E-mail address to contact you if you win an award in the competition, or any other general enquiries. In the case of group submission, one e-mail address will do.');

  return $field_instances;
}

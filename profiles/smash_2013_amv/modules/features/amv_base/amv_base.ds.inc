<?php
/**
 * @file
 * amv_base.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function amv_base_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|amv|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'amv';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_short',
    ),
  );
  $export['node|amv|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|amv|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'amv';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_video_format',
    ),
  );
  $export['node|amv|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|amv|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'amv';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'ds_post_date_video_format',
    ),
  );
  $export['node|amv|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function amv_base_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|amv|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'amv';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_video',
      ),
      'right' => array(
        1 => 'post_date',
        2 => 'field_rating',
        3 => 'body',
        4 => 'field_song',
        5 => 'field_artist',
        6 => 'field_series',
      ),
    ),
    'fields' => array(
      'field_video' => 'left',
      'post_date' => 'right',
      'field_rating' => 'right',
      'body' => 'right',
      'field_song' => 'right',
      'field_artist' => 'right',
      'field_series' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|amv|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|amv|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'amv';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_video_display',
      ),
      'right' => array(
        1 => 'title',
        2 => 'post_date',
        3 => 'field_rating',
        4 => 'body',
        5 => 'field_song',
        6 => 'field_artist',
        7 => 'field_series',
      ),
    ),
    'fields' => array(
      'field_video_display' => 'left',
      'title' => 'right',
      'post_date' => 'right',
      'field_rating' => 'right',
      'body' => 'right',
      'field_song' => 'right',
      'field_artist' => 'right',
      'field_series' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|amv|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|amv|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'amv';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_video_display',
      ),
      'right' => array(
        1 => 'title',
        2 => 'post_date',
        3 => 'field_rating',
        4 => 'body',
        5 => 'field_song',
        6 => 'field_artist',
        7 => 'field_series',
      ),
    ),
    'fields' => array(
      'field_video_display' => 'left',
      'title' => 'right',
      'post_date' => 'right',
      'field_rating' => 'right',
      'body' => 'right',
      'field_song' => 'right',
      'field_artist' => 'right',
      'field_series' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'section',
      'right' => 'aside',
    ),
    'layout_wrapper' => 'article',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|amv|teaser'] = $ds_layout;

  return $export;
}

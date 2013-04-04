<?php
/**
 * @file
 * amv_base.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function amv_base_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__amv';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => 'false',
      ),
      'rss' => array(
        'custom_settings' => 'false',
      ),
      'revision' => array(
        'custom_settings' => 'false',
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__amv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_amv';
  $strongarm->value = array();
  $export['menu_options_amv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_amv';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_amv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_amv';
  $strongarm->value = array();
  $export['node_options_amv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_amv';
  $strongarm->value = '1';
  $export['node_preview_amv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_amv';
  $strongarm->value = 0;
  $export['node_submitted_amv'] = $strongarm;

  return $export;
}
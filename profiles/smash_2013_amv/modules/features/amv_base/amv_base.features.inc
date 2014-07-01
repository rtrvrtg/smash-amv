<?php
/**
 * @file
 * amv_base.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amv_base_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function amv_base_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function amv_base_node_info() {
  $items = array(
    'amv' => array(
      'name' => t('AMV'),
      'base' => 'node_content',
      'description' => t('An AMV - Anime Music Video'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

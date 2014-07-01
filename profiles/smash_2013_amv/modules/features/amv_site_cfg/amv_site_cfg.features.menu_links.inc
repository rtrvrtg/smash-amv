<?php
/**
 * @file
 * amv_site_cfg.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function amv_site_cfg_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_submit-amv:node/add/amv
  $menu_links['main-menu_submit-amv:node/add/amv'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/amv',
    'router_path' => 'node/add/amv',
    'link_title' => 'Submit AMV',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_submit-amv:node/add/amv',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Submit AMV');


  return $menu_links;
}

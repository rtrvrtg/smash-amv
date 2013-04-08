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

  // Exported menu link: main-menu:amvs
  $menu_links['main-menu:amvs'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'amvs',
    'router_path' => 'amvs',
    'link_title' => 'AMVs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: main-menu:node/2
  $menu_links['main-menu:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Rules',
    'options' => array(
      'attributes' => array(
        'title' => 'Rules & Submission Guidelines',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 2,
  );
  // Exported menu link: main-menu:node/add/amv
  $menu_links['main-menu:node/add/amv'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/amv',
    'router_path' => 'node/add/amv',
    'link_title' => 'Submit AMV',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('AMVs');
  t('Rules');
  t('Submit AMV');


  return $menu_links;
}

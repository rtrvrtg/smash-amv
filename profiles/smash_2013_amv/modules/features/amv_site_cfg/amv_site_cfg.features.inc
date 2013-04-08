<?php
/**
 * @file
 * amv_site_cfg.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function amv_site_cfg_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

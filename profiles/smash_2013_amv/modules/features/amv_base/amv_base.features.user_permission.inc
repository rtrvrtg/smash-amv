<?php
/**
 * @file
 * amv_base.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amv_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: create amv content.
  $permissions['create amv content'] = array(
    'name' => 'create amv content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any amv content.
  $permissions['delete any amv content'] = array(
    'name' => 'delete any amv content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own amv content.
  $permissions['delete own amv content'] = array(
    'name' => 'delete own amv content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any amv content.
  $permissions['edit any amv content'] = array(
    'name' => 'edit any amv content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own amv content.
  $permissions['edit own amv content'] = array(
    'name' => 'edit own amv content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}

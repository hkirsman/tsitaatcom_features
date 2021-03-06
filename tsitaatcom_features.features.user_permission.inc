<?php
/**
 * @file
 * tsitaatcom_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tsitaatcom_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete own quote content'.
  $permissions['delete own quote content'] = array(
    'name' => 'delete own quote content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own quote content'.
  $permissions['edit own quote content'] = array(
    'name' => 'edit own quote content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}

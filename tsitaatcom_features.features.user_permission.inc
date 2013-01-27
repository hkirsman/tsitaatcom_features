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

  // Exported permission: access overlay.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'overlay',
  );

  return $permissions;
}

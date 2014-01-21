<?php
/**
 * @file
 * tsitaatcom_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function tsitaatcom_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_log-out:user/logout
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: user-menu_logi-sisse:user
  $menu_links['user-menu_logi-sisse:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Logi sisse',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_logi-sisse:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: user-menu_top-100:tsitaadid/top-100-tsitaadid
  $menu_links['user-menu_top-100:tsitaadid/top-100-tsitaadid'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'tsitaadid/top-100-tsitaadid',
    'router_path' => 'tsitaadid/top-100-tsitaadid',
    'link_title' => 'TOP 100',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_top-100:tsitaadid/top-100-tsitaadid',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_viimati-lisatud:latest-quotes
  $menu_links['user-menu_viimati-lisatud:latest-quotes'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'latest-quotes',
    'router_path' => 'latest-quotes',
    'link_title' => 'Viimati lisatud',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_viimati-lisatud:latest-quotes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Log out');
  t('Logi sisse');
  t('TOP 100');
  t('Viimati lisatud');


  return $menu_links;
}

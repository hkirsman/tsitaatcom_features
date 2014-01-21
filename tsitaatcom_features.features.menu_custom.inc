<?php
/**
 * @file
 * tsitaatcom_features.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function tsitaatcom_features_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => '<em>Kasutaja</em> menüü sisaldab linke, mis on seotud kasutajakontoga, näiteks \'Logi välja\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('<em>Kasutaja</em> menüü sisaldab linke, mis on seotud kasutajakontoga, näiteks \'Logi välja\' link.');
  t('User menu');


  return $menus;
}

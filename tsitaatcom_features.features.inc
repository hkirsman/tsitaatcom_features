<?php
/**
 * @file
 * tsitaatcom_features.features.inc
 */

/**
 * Implements hook_node_info().
 */
function tsitaatcom_features_node_info() {
  $items = array(
    'quote' => array(
      'name' => t('Tsitaat'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'quote_author' => array(
      'name' => t('quote author'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'quote_category' => array(
      'name' => t('quote_category'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'quote_source' => array(
      'name' => t('quote source'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

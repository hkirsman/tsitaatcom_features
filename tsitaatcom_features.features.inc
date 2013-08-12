<?php
/**
 * @file
 * tsitaatcom_features.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tsitaatcom_features_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tsitaatcom_features_node_info() {
  $items = array(
    'quote' => array(
      'name' => t('Quote'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'quote_author' => array(
      'name' => t('Quote Author'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'quote_author_portrait' => array(
      'name' => t('Quote Author Portrait'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'quote_category' => array(
      'name' => t('Quote Category'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'quote_source' => array(
      'name' => t('Quote Source'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
  );
  return $items;
}

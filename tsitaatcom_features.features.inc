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
      'name' => t('Quote'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'quote_author' => array(
      'name' => t('Quote author'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'quote_category' => array(
      'name' => t('Quote_category'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'quote_source' => array(
      'name' => t('Quote source'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
  );
  return $items;
}

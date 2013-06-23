<?php
/**
 * @file
 * tsitaatcom_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tsitaatcom_features_taxonomy_default_vocabularies() {
  return array(
    'quote_category' => array(
      'name' => 'Quote category',
      'machine_name' => 'quote_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'quote_tag' => array(
      'name' => 'Quote tag',
      'machine_name' => 'quote_tag',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}

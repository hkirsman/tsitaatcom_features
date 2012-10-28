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
    'quote_tags' => array(
      'name' => 'Tsitaadi märksõnad',
      'machine_name' => 'quote_tags',
      'description' => 'Üks või mitu sisuga seotud sõna',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}

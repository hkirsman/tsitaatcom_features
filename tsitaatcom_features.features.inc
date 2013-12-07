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
 * Implements hook_image_default_styles().
 */
function tsitaatcom_features_image_default_styles() {
  $styles = array();

  // Exported image style: tsitaatcom_author_thumbnail.
  $styles['tsitaatcom_author_thumbnail'] = array(
    'name' => 'tsitaatcom_author_thumbnail',
    'label' => 'tsitaatcom_author_thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Skaleerimine',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 90,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
      'description' => t('Source of a quote e.g. article or a movie. All the fields are prefixed as qs.'),
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
  );
  return $items;
}

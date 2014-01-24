<?php
/**
 * @file
 * tsitaatcom_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tsitaatcom_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tsitaatcom_features_views_api($module = NULL, $api = NULL) {
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
    'label' => 'TsitaatCom Author Thumbnail',
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
          'width' => 67,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      2 => array(
        'label' => 'Lõika',
        'help' => 'Cropping will remove portions of an image to make it the specified dimensions.',
        'effect callback' => 'image_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_crop_form',
        'summary theme' => 'image_crop_summary',
        'module' => 'image',
        'name' => 'image_crop',
        'data' => array(
          'width' => 67,
          'height' => 67,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
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
      'name' => t('Tsitaat'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'quote_author' => array(
      'name' => t('Autor'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'quote_author_portrait' => array(
      'name' => t('Pilt'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
    'quote_source' => array(
      'name' => t('Allikas'),
      'base' => 'node_content',
      'description' => t('Source of a quote e.g. article or a movie. All the fields are prefixed as qs.'),
      'has_title' => '1',
      'title_label' => t('Pealkiri'),
      'help' => '',
    ),
  );
  return $items;
}

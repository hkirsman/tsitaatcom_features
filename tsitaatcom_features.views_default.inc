<?php
/**
 * @file
 * tsitaatcom_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tsitaatcom_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'quote';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Quote';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Lähtesta';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« esimene';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ eelmine';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'järgmine ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'viimane »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Quote author */
  $handler->display->display_options['relationships']['field_author_target_id_1']['id'] = 'field_author_target_id_1';
  $handler->display->display_options['relationships']['field_author_target_id_1']['table'] = 'field_data_field_author';
  $handler->display->display_options['relationships']['field_author_target_id_1']['field'] = 'field_author_target_id';
  $handler->display->display_options['relationships']['field_author_target_id_1']['ui_name'] = 'Quote author';
  $handler->display->display_options['relationships']['field_author_target_id_1']['required'] = TRUE;
  /* Relationship: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['ui_name'] = 'Content author';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Sisu: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Tag taxonomy relationship';
  $handler->display->display_options['relationships']['term_node_tid']['required'] = TRUE;
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'quote_tag' => 'quote_tag',
    'forums' => 0,
    'quote_category' => 0,
  );
  /* Väli: Sisu: Urlfriendly author name */
  $handler->display->display_options['fields']['field_urlfriendly_author_name']['id'] = 'field_urlfriendly_author_name';
  $handler->display->display_options['fields']['field_urlfriendly_author_name']['table'] = 'field_data_field_urlfriendly_author_name';
  $handler->display->display_options['fields']['field_urlfriendly_author_name']['field'] = 'field_urlfriendly_author_name';
  $handler->display->display_options['fields']['field_urlfriendly_author_name']['relationship'] = 'field_author_target_id_1';
  $handler->display->display_options['fields']['field_urlfriendly_author_name']['label'] = '';
  $handler->display->display_options['fields']['field_urlfriendly_author_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_urlfriendly_author_name']['element_label_colon'] = FALSE;
  /* Väli: Sisu: Pealkiri */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_author_target_id_1';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'tsitaadid/autorid/[field_urlfriendly_author_name]';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Väli: Sisu: Profession */
  $handler->display->display_options['fields']['field_author_profession']['id'] = 'field_author_profession';
  $handler->display->display_options['fields']['field_author_profession']['table'] = 'field_data_field_author_profession';
  $handler->display->display_options['fields']['field_author_profession']['field'] = 'field_author_profession';
  $handler->display->display_options['fields']['field_author_profession']['relationship'] = 'field_author_target_id_1';
  $handler->display->display_options['fields']['field_author_profession']['label'] = '';
  $handler->display->display_options['fields']['field_author_profession']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_author_profession']['element_label_colon'] = FALSE;
  /* Väli: Sisu: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['label'] = '';
  $handler->display->display_options['fields']['field_quote']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_quote']['element_label_colon'] = FALSE;
  /* Väli: Sisu: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'Kategooria';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_category']['element_label_type'] = 'span';
  /* Väli: Kasutaja: Nimi */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Lisas';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Väli: Sisu: Source title */
  $handler->display->display_options['fields']['field_source_title']['id'] = 'field_source_title';
  $handler->display->display_options['fields']['field_source_title']['table'] = 'field_data_field_source_title';
  $handler->display->display_options['fields']['field_source_title']['field'] = 'field_source_title';
  $handler->display->display_options['fields']['field_source_title']['exclude'] = TRUE;
  /* Väli: Sisu: Source title extra prefix */
  $handler->display->display_options['fields']['field_source_title_extra_prefix']['id'] = 'field_source_title_extra_prefix';
  $handler->display->display_options['fields']['field_source_title_extra_prefix']['table'] = 'field_data_field_source_title_extra_prefix';
  $handler->display->display_options['fields']['field_source_title_extra_prefix']['field'] = 'field_source_title_extra_prefix';
  $handler->display->display_options['fields']['field_source_title_extra_prefix']['exclude'] = TRUE;
  /* Väli: Sisu: Source title extra suffix */
  $handler->display->display_options['fields']['field_source_title_extra_suffix']['id'] = 'field_source_title_extra_suffix';
  $handler->display->display_options['fields']['field_source_title_extra_suffix']['table'] = 'field_data_field_source_title_extra_suffix';
  $handler->display->display_options['fields']['field_source_title_extra_suffix']['field'] = 'field_source_title_extra_suffix';
  $handler->display->display_options['fields']['field_source_title_extra_suffix']['exclude'] = TRUE;
  /* Väli: Sisu: Source year end */
  $handler->display->display_options['fields']['field_source_year_end']['id'] = 'field_source_year_end';
  $handler->display->display_options['fields']['field_source_year_end']['table'] = 'field_data_field_source_year_end';
  $handler->display->display_options['fields']['field_source_year_end']['field'] = 'field_source_year_end';
  $handler->display->display_options['fields']['field_source_year_end']['exclude'] = TRUE;
  /* Väli: Sisu: Source year start */
  $handler->display->display_options['fields']['field_source_year_start']['id'] = 'field_source_year_start';
  $handler->display->display_options['fields']['field_source_year_start']['table'] = 'field_data_field_source_year_start';
  $handler->display->display_options['fields']['field_source_year_start']['field'] = 'field_source_year_start';
  $handler->display->display_options['fields']['field_source_year_start']['exclude'] = TRUE;
  /* Väli: Sisu: Source year start circa */
  $handler->display->display_options['fields']['field_source_year_start_circa']['id'] = 'field_source_year_start_circa';
  $handler->display->display_options['fields']['field_source_year_start_circa']['table'] = 'field_data_field_source_year_start_circa';
  $handler->display->display_options['fields']['field_source_year_start_circa']['field'] = 'field_source_year_start_circa';
  $handler->display->display_options['fields']['field_source_year_start_circa']['exclude'] = TRUE;
  /* Väli: Sisu: Tag */
  $handler->display->display_options['fields']['field_tag']['id'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['table'] = 'field_data_field_tag';
  $handler->display->display_options['fields']['field_tag']['field'] = 'field_tag';
  $handler->display->display_options['fields']['field_tag']['label'] = '';
  $handler->display->display_options['fields']['field_tag']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tag']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tag']['alter']['path'] = 'tsitaadid/teemad/[field_tag]';
  $handler->display->display_options['fields']['field_tag']['alter']['replace_spaces_with_underscore'] = TRUE;
  $handler->display->display_options['fields']['field_tag']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tag']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_tag']['delta_offset'] = '0';
  /* Väli: Rewrite all fields here */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Rewrite all fields here';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="clearfix">
  <div class="col1">
    <div class="field_title">[title_1]</div>
    <div class="field_author_profession">[field_author_profession]</div>
    <div class="field_quote">[field_quote]</div>
  </div>
  <div class="col2">
    <div class="field_tag">Märksõnad: [field_tag]</div>
  </div>
</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Sisu: Created time (field_created_time) */
  $handler->display->display_options['sorts']['field_created_time_value']['id'] = 'field_created_time_value';
  $handler->display->display_options['sorts']['field_created_time_value']['table'] = 'field_data_field_created_time';
  $handler->display->display_options['sorts']['field_created_time_value']['field'] = 'field_created_time_value';
  $handler->display->display_options['sorts']['field_created_time_value']['order'] = 'DESC';
  /* Filter criterion: Sisu: Avaldatud */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Sisu: Liik */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'quote' => 'quote',
  );

  /* Display: Lehekülg */
  $handler = $view->new_display('page', 'Lehekülg', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'avaleht';

  /* Display: Autori järgi */
  $handler = $view->new_display('page', 'Autori järgi', 'page_2');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Sisu: Urlfriendly author name (field_urlfriendly_author_name) */
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['id'] = 'field_urlfriendly_author_name_value';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['table'] = 'field_data_field_urlfriendly_author_name';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['field'] = 'field_urlfriendly_author_name_value';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['relationship'] = 'field_author_target_id_1';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['exception']['title'] = 'Kõik';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['limit'] = '0';
  $handler->display->display_options['path'] = 'tsitaadid/autorid/%';

  /* Display: Autori järgi */
  $handler = $view->new_display('block', 'Autori järgi', 'block_1');
  $handler->display->display_options['display_description'] = 'Kutsutakse tsitaatcom moodulist.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Sisu: Urlfriendly author name (field_urlfriendly_author_name) */
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['id'] = 'field_urlfriendly_author_name_value';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['table'] = 'field_data_field_urlfriendly_author_name';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['field'] = 'field_urlfriendly_author_name_value';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['relationship'] = 'field_author_target_id_1';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['exception']['title'] = 'Kõik';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_urlfriendly_author_name_value']['limit'] = '0';

  /* Display: Märksõna järgi */
  $handler = $view->new_display('page', 'Märksõna järgi', 'page_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taksonoomia termin: Nimi */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['exception']['title'] = 'Kõik';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['path'] = 'tsitaadid/teemad/%';
  $translatables['quote'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Lähtesta'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« esimene'),
    t('‹ eelmine'),
    t('järgmine ›'),
    t('viimane »'),
    t('Sisu entity referenced from field_author'),
    t('author'),
    t('Tag taxonomy relationship'),
    t('Kategooria'),
    t('Lisas'),
    t('Source title'),
    t('Source title extra prefix'),
    t('Source title extra suffix'),
    t('Source year end'),
    t('Source year start'),
    t('Source year start circa'),
    t('<div class="clearfix">
  <div class="col1">
    <div class="field_title">[title_1]</div>
    <div class="field_author_profession">[field_author_profession]</div>
    <div class="field_quote">[field_quote]</div>
  </div>
  <div class="col2">
    <div class="field_tag">Märksõnad: [field_tag]</div>
  </div>
</div>'),
    t('Lehekülg'),
    t('Autori järgi'),
    t('Kõik'),
    t('Kutsutakse tsitaatcom moodulist.'),
    t('Märksõna järgi'),
  );
  $export['quote'] = $view;

  return $export;
}

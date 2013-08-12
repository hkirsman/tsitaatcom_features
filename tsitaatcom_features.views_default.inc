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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Lähtesta';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_author_portrait_ref_target_id']['id'] = 'field_author_portrait_ref_target_id';
  $handler->display->display_options['relationships']['field_author_portrait_ref_target_id']['table'] = 'field_data_field_author_portrait_ref';
  $handler->display->display_options['relationships']['field_author_portrait_ref_target_id']['field'] = 'field_author_portrait_ref_target_id';
  $handler->display->display_options['relationships']['field_author_portrait_ref_target_id']['relationship'] = 'field_author_target_id_1';
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
  /* Väli: : field_quote_author_portrait */
  $handler->display->display_options['fields']['field_quote_author_portrait_1']['id'] = 'field_quote_author_portrait_1';
  $handler->display->display_options['fields']['field_quote_author_portrait_1']['table'] = 'field_data_field_quote_author_portrait';
  $handler->display->display_options['fields']['field_quote_author_portrait_1']['field'] = 'field_quote_author_portrait';
  $handler->display->display_options['fields']['field_quote_author_portrait_1']['relationship'] = 'field_author_portrait_ref_target_id';
  $handler->display->display_options['fields']['field_quote_author_portrait_1']['label'] = '';
  $handler->display->display_options['fields']['field_quote_author_portrait_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_quote_author_portrait_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_quote_author_portrait_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_quote_author_portrait_1']['alter']['path'] = 'tsitaadid/autorid/[field_urlfriendly_author_name]';
  $handler->display->display_options['fields']['field_quote_author_portrait_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quote_author_portrait_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_quote_author_portrait_1']['settings'] = array(
    'image_style' => 'tsitaatcom_quote_author_thumbnail',
    'image_link' => '',
  );
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
  /* Väli: Sisu: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
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
    <div class="field_portrait">[field_quote_author_portrait_1]</div>
    <div class="field_tag">Märksõnad: [field_tag]</div>
    [edit_node]
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

  /* Display: Front page */
  $handler = $view->new_display('page', 'Front page', 'front_page');
  $handler->display->display_options['display_description'] = 'Latest quotations on frontpage.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '17';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« esimene';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ eelmine';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'järgmine ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'viimane »';
  $handler->display->display_options['path'] = 'avaleht';

  /* Display: Quotes by author block */
  $handler = $view->new_display('block', 'Quotes by author block', 'quotes_by_author_block');
  $handler->display->display_options['display_description'] = 'Called programmatically from tsitaatcom module.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Sisu: Rank (field_rank) */
  $handler->display->display_options['sorts']['field_rank_value']['id'] = 'field_rank_value';
  $handler->display->display_options['sorts']['field_rank_value']['table'] = 'field_data_field_rank';
  $handler->display->display_options['sorts']['field_rank_value']['field'] = 'field_rank_value';
  $handler->display->display_options['sorts']['field_rank_value']['order'] = 'DESC';
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

  /* Display: Quotes by tags page */
  $handler = $view->new_display('page', 'Quotes by tags page', 'quotes_by_tags_page');
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

  /* Display: Top 100 page */
  $handler = $view->new_display('page', 'Top 100 page', 'top_100_page');
  $handler->display->display_options['display_description'] = 'List highest rated 100 quotes.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '80';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Sisu: Rank (field_rank) */
  $handler->display->display_options['sorts']['field_rank_value']['id'] = 'field_rank_value';
  $handler->display->display_options['sorts']['field_rank_value']['table'] = 'field_data_field_rank';
  $handler->display->display_options['sorts']['field_rank_value']['field'] = 'field_rank_value';
  $handler->display->display_options['sorts']['field_rank_value']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'tsitaadid/top-100-tsitaadid';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Top 100';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Test */
  $handler = $view->new_display('page', 'Test', 'page_1');
  $handler->display->display_options['display_description'] = 'Latest quotations on frontpage.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Sisu: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'tsitaadid/autorid/[field_urlfriendly_author_name]';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
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
  $handler->display->display_options['path'] = 'test';

  /* Display: Front page display suit */
  $handler = $view->new_display('page', 'Front page display suit', 'page_2');
  $handler->display->display_options['display_description'] = 'Latest quotations on frontpage.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '17';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« esimene';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ eelmine';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'järgmine ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'viimane »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Sisu: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['path'] = 'avaleht_ds';

  /* Display: Top 100 page display suite */
  $handler = $view->new_display('page', 'Top 100 page display suite', 'page_3');
  $handler->display->display_options['display_description'] = 'List highest rated 100 quotes.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '80';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Sisu: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Sisu: Rank (field_rank) */
  $handler->display->display_options['sorts']['field_rank_value']['id'] = 'field_rank_value';
  $handler->display->display_options['sorts']['field_rank_value']['table'] = 'field_data_field_rank';
  $handler->display->display_options['sorts']['field_rank_value']['field'] = 'field_rank_value';
  $handler->display->display_options['sorts']['field_rank_value']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'tsitaadid/top-100-tsitaadid-ds';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Top 100 ds';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['quote'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Lähtesta'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Sisu entity referenced from field_author'),
    t('author'),
    t('Tag taxonomy relationship'),
    t('Sisu entity referenced from field_author_portrait_ref'),
    t('Kategooria'),
    t('Lisas'),
    t('Source title'),
    t('Source title extra prefix'),
    t('Source title extra suffix'),
    t('Source year end'),
    t('Source year start'),
    t('Source year start circa'),
    t('Edit link'),
    t('<div class="clearfix">
  <div class="col1">
    <div class="field_title">[title_1]</div>
    <div class="field_author_profession">[field_author_profession]</div>
    <div class="field_quote">[field_quote]</div>
  </div>
  <div class="col2">
    <div class="field_portrait">[field_quote_author_portrait_1]</div>
    <div class="field_tag">Märksõnad: [field_tag]</div>
    [edit_node]
  </div>
</div>'),
    t('Front page'),
    t('Latest quotations on frontpage.'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« esimene'),
    t('‹ eelmine'),
    t('järgmine ›'),
    t('viimane »'),
    t('Quotes by author block'),
    t('Called programmatically from tsitaatcom module.'),
    t('Kõik'),
    t('Quotes by tags page'),
    t('Top 100 page'),
    t('List highest rated 100 quotes.'),
    t('Test'),
    t('Front page display suit'),
    t('Top 100 page display suite'),
  );
  $export['quote'] = $view;

  return $export;
}

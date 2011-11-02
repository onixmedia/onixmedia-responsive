<?php
/**
 * @file
 * onix_features_home.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function onix_features_home_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'knowledge';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Knowledge';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Knowledge';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Encabezado: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Título';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'knowledge-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = '0';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_wrapper_class'] = 'body';
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Campo: Contenido: Image */
  $handler->display->display_options['fields']['field_knowledge_image']['id'] = 'field_knowledge_image';
  $handler->display->display_options['fields']['field_knowledge_image']['table'] = 'field_data_field_knowledge_image';
  $handler->display->display_options['fields']['field_knowledge_image']['field'] = 'field_knowledge_image';
  $handler->display->display_options['fields']['field_knowledge_image']['label'] = '';
  $handler->display->display_options['fields']['field_knowledge_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_knowledge_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_knowledge_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_knowledge_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_knowledge_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_knowledge_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_knowledge_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_knowledge_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_knowledge_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_knowledge_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_knowledge_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_knowledge_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_knowledge_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_knowledge_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_knowledge_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_knowledge_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_knowledge_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_knowledge_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_knowledge_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_knowledge_image']['field_api_classes'] = 0;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'knowledge' => 'knowledge',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['knowledge'] = array(
    t('Master'),
    t('Knowledge'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Título'),
    t('Block'),
  );
  $export['knowledge'] = $view;

  $view = new view;
  $view->name = 'projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Projects';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Encabezado: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Proyectos';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Somos apasionados de la tecnología, estas son algunas colaboraciones con marcas que han innovado a través de ella y con nuestra ayuda.
';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Campo: Contenido: Type */
  $handler->display->display_options['fields']['field_projects_type']['id'] = 'field_projects_type';
  $handler->display->display_options['fields']['field_projects_type']['table'] = 'field_data_field_projects_type';
  $handler->display->display_options['fields']['field_projects_type']['field'] = 'field_projects_type';
  $handler->display->display_options['fields']['field_projects_type']['label'] = '';
  $handler->display->display_options['fields']['field_projects_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_projects_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_projects_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_projects_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_projects_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_projects_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_projects_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_projects_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_projects_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_projects_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_projects_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_projects_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_projects_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_projects_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_projects_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_projects_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_projects_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_projects_type']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_projects_type']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_projects_type']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_projects_type']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_projects_type']['separator'] = '/';
  $handler->display->display_options['fields']['field_projects_type']['field_api_classes'] = 0;
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]
<span class="type">[field_projects_type]</span>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'proyectos-head';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Campo: Contenido: Image */
  $handler->display->display_options['fields']['field_projects_image']['id'] = 'field_projects_image';
  $handler->display->display_options['fields']['field_projects_image']['table'] = 'field_data_field_projects_image';
  $handler->display->display_options['fields']['field_projects_image']['field'] = 'field_projects_image';
  $handler->display->display_options['fields']['field_projects_image']['label'] = '';
  $handler->display->display_options['fields']['field_projects_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_projects_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_projects_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_projects_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_projects_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_projects_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_projects_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_projects_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_projects_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_projects_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_projects_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_projects_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_projects_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_projects_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_projects_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_projects_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_projects_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_projects_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_projects_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_projects_image']['settings'] = array(
    'image_style' => 'project_thumb1',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_projects_image']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_projects_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_projects_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_projects_image']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_projects_image']['separator'] = '';
  $handler->display->display_options['fields']['field_projects_image']['field_api_classes'] = 0;
  /* Campo: Contenido: Image */
  $handler->display->display_options['fields']['field_projects_image_1']['id'] = 'field_projects_image_1';
  $handler->display->display_options['fields']['field_projects_image_1']['table'] = 'field_data_field_projects_image';
  $handler->display->display_options['fields']['field_projects_image_1']['field'] = 'field_projects_image';
  $handler->display->display_options['fields']['field_projects_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_projects_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_projects_image_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_projects_image_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_projects_image_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_projects_image_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_projects_image_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_projects_image_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_projects_image_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_projects_image_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_projects_image_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_projects_image_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_projects_image_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_projects_image_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_projects_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_projects_image_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_projects_image_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_projects_image_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_projects_image_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_projects_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_projects_image_1']['settings'] = array(
    'image_style' => 'project_thumb2',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_projects_image_1']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_projects_image_1']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_projects_image_1']['delta_offset'] = '1';
  $handler->display->display_options['fields']['field_projects_image_1']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_projects_image_1']['separator'] = '';
  $handler->display->display_options['fields']['field_projects_image_1']['field_api_classes'] = 0;
  /* Campo: Contenido: Image */
  $handler->display->display_options['fields']['field_projects_image_2']['id'] = 'field_projects_image_2';
  $handler->display->display_options['fields']['field_projects_image_2']['table'] = 'field_data_field_projects_image';
  $handler->display->display_options['fields']['field_projects_image_2']['field'] = 'field_projects_image';
  $handler->display->display_options['fields']['field_projects_image_2']['label'] = '';
  $handler->display->display_options['fields']['field_projects_image_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_projects_image_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_projects_image_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_projects_image_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_projects_image_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_projects_image_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_projects_image_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_projects_image_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_projects_image_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_projects_image_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_projects_image_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_projects_image_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_projects_image_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_projects_image_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_projects_image_2']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_projects_image_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_projects_image_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_projects_image_2']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_projects_image_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_projects_image_2']['settings'] = array(
    'image_style' => 'project_thumb3',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_projects_image_2']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_projects_image_2']['delta_limit'] = '2';
  $handler->display->display_options['fields']['field_projects_image_2']['delta_offset'] = '2';
  $handler->display->display_options['fields']['field_projects_image_2']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_projects_image_2']['separator'] = '';
  $handler->display->display_options['fields']['field_projects_image_2']['field_api_classes'] = 0;
  /* Campo: Contenido: Sub Title */
  $handler->display->display_options['fields']['field_projects_subtitle']['id'] = 'field_projects_subtitle';
  $handler->display->display_options['fields']['field_projects_subtitle']['table'] = 'field_data_field_projects_subtitle';
  $handler->display->display_options['fields']['field_projects_subtitle']['field'] = 'field_projects_subtitle';
  $handler->display->display_options['fields']['field_projects_subtitle']['label'] = '';
  $handler->display->display_options['fields']['field_projects_subtitle']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_projects_subtitle']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_projects_subtitle']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_projects_subtitle']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_projects_subtitle']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_projects_subtitle']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_projects_subtitle']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_projects_subtitle']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_projects_subtitle']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_projects_subtitle']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_projects_subtitle']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_projects_subtitle']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_projects_subtitle']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_projects_subtitle']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_projects_subtitle']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_projects_subtitle']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_projects_subtitle']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_projects_subtitle']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_projects_subtitle']['field_api_classes'] = 0;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="images clearfix">[field_projects_image][field_projects_image_1][field_projects_image_2]</div>
<div class="subtitle">[field_projects_subtitle]</div>
<div class="body">[body]</div>';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_1']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'proyectos-tab clearfix';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 0;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'projects' => 'projects',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Proyectos';
  $translatables['projects'] = array(
    t('Master'),
    t('Projects'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Proyectos'),
    t('Somos apasionados de la tecnología, estas son algunas colaboraciones con marcas que han innovado a través de ella y con nuestra ayuda.
'),
    t('[title]
<span class="type">[field_projects_type]</span>'),
    t('<div class="images clearfix">[field_projects_image][field_projects_image_1][field_projects_image_2]</div>
<div class="subtitle">[field_projects_subtitle]</div>
<div class="body">[body]</div>'),
    t('Block'),
  );
  $export['projects'] = $view;

  $view = new view;
  $view->name = 'slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slideshow';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Campo: Contenido: Image */
  $handler->display->display_options['fields']['field_slideshow_image']['id'] = 'field_slideshow_image';
  $handler->display->display_options['fields']['field_slideshow_image']['table'] = 'field_data_field_slideshow_image';
  $handler->display->display_options['fields']['field_slideshow_image']['field'] = 'field_slideshow_image';
  $handler->display->display_options['fields']['field_slideshow_image']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slideshow_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideshow_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_slideshow_image']['field_api_classes'] = 0;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_class'] = 'balloon';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow' => 'slideshow',
  );
  /* Filter criterion: Contenido: Section (field_slideshow_section) */
  $handler->display->display_options['filters']['field_slideshow_section_value']['id'] = 'field_slideshow_section_value';
  $handler->display->display_options['filters']['field_slideshow_section_value']['table'] = 'field_data_field_slideshow_section';
  $handler->display->display_options['filters']['field_slideshow_section_value']['field'] = 'field_slideshow_section_value';
  $handler->display->display_options['filters']['field_slideshow_section_value']['value'] = array(
    'front' => 'front',
  );

  /* Display: Slideshow */
  $handler = $view->new_display('block', 'Slideshow', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Slideshow used for the front page of the site.';
  $translatables['slideshow'] = array(
    t('Master'),
    t('Slideshow'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Slideshow used for the front page of the site.'),
  );
  $export['slideshow'] = $view;

  $view = new view;
  $view->name = 'solutions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Solutions';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Solutions';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Encabezado: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '+';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'plus';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Campo: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<h3>[title]</h3>
<div class="body">[body]</div>';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing_1']['element_class'] = 'container';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['nothing_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing_1']['hide_alter_empty'] = 0;
  /* Sort criterion: Contenido: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Contenido: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Contenido: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'solutions' => 'solutions',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;

  /* Display: Adjunto */
  $handler = $view->new_display('attachment', 'Adjunto', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Encabezado: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="close">&nbsp;</div>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Contenido: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'attach-head';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Campo: Contenido: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Campo: Contenido: Image */
  $handler->display->display_options['fields']['field_solutions_image']['id'] = 'field_solutions_image';
  $handler->display->display_options['fields']['field_solutions_image']['table'] = 'field_data_field_solutions_image';
  $handler->display->display_options['fields']['field_solutions_image']['field'] = 'field_solutions_image';
  $handler->display->display_options['fields']['field_solutions_image']['label'] = '';
  $handler->display->display_options['fields']['field_solutions_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_solutions_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_solutions_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_solutions_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_solutions_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_solutions_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_solutions_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_solutions_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_solutions_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_solutions_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_solutions_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_solutions_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_solutions_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_solutions_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_solutions_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_solutions_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_solutions_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_solutions_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_solutions_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_solutions_image']['field_api_classes'] = 0;
  $handler->display->display_options['displays'] = array(
    'block' => 'block',
    'default' => 0,
  );
  $translatables['solutions'] = array(
    t('Master'),
    t('Solutions'),
    t('more'),
    t('Apply'),
    t('Reiniciar'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('+'),
    t('<h3>[title]</h3>
<div class="body">[body]</div>'),
    t('Block'),
    t('Adjunto'),
    t('<div class="close">&nbsp;</div>'),
  );
  $export['solutions'] = $view;

  return $export;
}

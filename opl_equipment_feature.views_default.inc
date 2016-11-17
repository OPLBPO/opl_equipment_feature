<?php
/**
 * @file
 * opl_equipment_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function opl_equipment_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'equipment';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Equipment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Imagine Space Equipment ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 50, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'nid' => 'nid',
    'title' => 'title',
    'field_image' => 'field_image',
    'body' => 'body',
    'field_branch' => 'field_branch',
    'field_requires_certification' => 'field_requires_certification',
    'field_bookable' => 'field_bookable',
    'field_borrowable' => 'field_borrowable',
    'edit_node' => 'edit_node',
    'clone_node' => 'clone_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_branch' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_requires_certification' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bookable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_borrowable' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'clone_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'equipment::field_branch' => 'equipment::field_branch',
          'equipment::field_availability' => 'equipment::field_availability',
          'equipment::field_requires_certification' => 'equipment::field_requires_certification',
        ),
      ),
    ),
    'action::node_export_drupal_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_promote_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Content: Branch */
  $handler->display->display_options['fields']['field_branch']['id'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['table'] = 'field_data_field_branch';
  $handler->display->display_options['fields']['field_branch']['field'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_branch']['delta_offset'] = '0';
  /* Field: Content: Requires Certification */
  $handler->display->display_options['fields']['field_requires_certification']['id'] = 'field_requires_certification';
  $handler->display->display_options['fields']['field_requires_certification']['table'] = 'field_data_field_requires_certification';
  $handler->display->display_options['fields']['field_requires_certification']['field'] = 'field_requires_certification';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  /* Field: Content: Booking and Borrowing */
  $handler->display->display_options['fields']['field_borrowable']['id'] = 'field_borrowable';
  $handler->display->display_options['fields']['field_borrowable']['table'] = 'field_data_field_borrowable';
  $handler->display->display_options['fields']['field_borrowable']['field'] = 'field_borrowable';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['nid']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'equipment' => 'equipment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    1 => 0,
    24 => 0,
    12 => 0,
    14 => 0,
    21 => 0,
    26 => 0,
    4 => 0,
    17 => 0,
    27 => 0,
    30 => 0,
    31 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
  );
  /* Filter criterion: Content: Requires Certification (field_requires_certification) */
  $handler->display->display_options['filters']['field_requires_certification_value']['id'] = 'field_requires_certification_value';
  $handler->display->display_options['filters']['field_requires_certification_value']['table'] = 'field_data_field_requires_certification';
  $handler->display->display_options['filters']['field_requires_certification_value']['field'] = 'field_requires_certification_value';
  $handler->display->display_options['filters']['field_requires_certification_value']['group'] = 1;
  $handler->display->display_options['filters']['field_requires_certification_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_requires_certification_value']['expose']['operator_id'] = 'field_requires_certification_value_op';
  $handler->display->display_options['filters']['field_requires_certification_value']['expose']['label'] = 'Requires Certification';
  $handler->display->display_options['filters']['field_requires_certification_value']['expose']['operator'] = 'field_requires_certification_value_op';
  $handler->display->display_options['filters']['field_requires_certification_value']['expose']['identifier'] = 'field_requires_certification_value';
  $handler->display->display_options['filters']['field_requires_certification_value']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    1 => 0,
    24 => 0,
    12 => 0,
    14 => 0,
    21 => 0,
    26 => 0,
    4 => 0,
    17 => 0,
    27 => 0,
    30 => 0,
    31 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'equipment::field_branch' => 'equipment::field_branch',
          'equipment::field_availability' => 'equipment::field_availability',
          'equipment::field_requires_certification' => 'equipment::field_requires_certification',
          'equipment::field_image' => 'equipment::field_image',
          'equipment::field_borrowable' => 'equipment::field_borrowable',
        ),
      ),
    ),
    'action::node_export_drupal_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_promote_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Content: Branch */
  $handler->display->display_options['fields']['field_branch']['id'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['table'] = 'field_data_field_branch';
  $handler->display->display_options['fields']['field_branch']['field'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_branch']['delta_offset'] = '0';
  /* Field: Content: Requires Certification */
  $handler->display->display_options['fields']['field_requires_certification']['id'] = 'field_requires_certification';
  $handler->display->display_options['fields']['field_requires_certification']['table'] = 'field_data_field_requires_certification';
  $handler->display->display_options['fields']['field_requires_certification']['field'] = 'field_requires_certification';
  /* Field: Content: Booking and Borrowing */
  $handler->display->display_options['fields']['field_borrowable']['id'] = 'field_borrowable';
  $handler->display->display_options['fields']['field_borrowable']['table'] = 'field_data_field_borrowable';
  $handler->display->display_options['fields']['field_borrowable']['field'] = 'field_borrowable';
  $handler->display->display_options['fields']['field_borrowable']['label'] = 'Borrowable';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'equipment' => 'equipment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['group'] = 1;
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['label'] = 'Search Terms';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    1 => 0,
    24 => 0,
    12 => 0,
    14 => 0,
    21 => 0,
    26 => 0,
    4 => 0,
    17 => 0,
    27 => 0,
    30 => 0,
    31 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
  );
  /* Filter criterion: Content: Requires Certification (field_requires_certification) */
  $handler->display->display_options['filters']['field_requires_certification_value']['id'] = 'field_requires_certification_value';
  $handler->display->display_options['filters']['field_requires_certification_value']['table'] = 'field_data_field_requires_certification';
  $handler->display->display_options['filters']['field_requires_certification_value']['field'] = 'field_requires_certification_value';
  $handler->display->display_options['filters']['field_requires_certification_value']['group'] = 1;
  $handler->display->display_options['filters']['field_requires_certification_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_requires_certification_value']['expose']['operator_id'] = 'field_requires_certification_value_op';
  $handler->display->display_options['filters']['field_requires_certification_value']['expose']['label'] = 'Requires Certification';
  $handler->display->display_options['filters']['field_requires_certification_value']['expose']['operator'] = 'field_requires_certification_value_op';
  $handler->display->display_options['filters']['field_requires_certification_value']['expose']['identifier'] = 'field_requires_certification_value';
  $handler->display->display_options['filters']['field_requires_certification_value']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    1 => 0,
    24 => 0,
    12 => 0,
    14 => 0,
    21 => 0,
    26 => 0,
    4 => 0,
    17 => 0,
    27 => 0,
    30 => 0,
    31 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
    41 => 0,
  );
  /* Filter criterion: Content: Booking and Borrowing (field_borrowable) */
  $handler->display->display_options['filters']['field_borrowable_value']['id'] = 'field_borrowable_value';
  $handler->display->display_options['filters']['field_borrowable_value']['table'] = 'field_data_field_borrowable';
  $handler->display->display_options['filters']['field_borrowable_value']['field'] = 'field_borrowable_value';
  $handler->display->display_options['filters']['field_borrowable_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_borrowable_value']['expose']['operator_id'] = 'field_borrowable_value_op';
  $handler->display->display_options['filters']['field_borrowable_value']['expose']['label'] = 'Borrowable';
  $handler->display->display_options['filters']['field_borrowable_value']['expose']['operator'] = 'field_borrowable_value_op';
  $handler->display->display_options['filters']['field_borrowable_value']['expose']['identifier'] = 'field_borrowable_value';
  $handler->display->display_options['filters']['field_borrowable_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_borrowable_value']['expose']['remember_roles'] = array(
    2 => '2',
    15 => 0,
    1 => 0,
    24 => 0,
    12 => 0,
    14 => 0,
    21 => 0,
    26 => 0,
    4 => 0,
    17 => 0,
    27 => 0,
    30 => 0,
    31 => 0,
    33 => 0,
    34 => 0,
    35 => 0,
    36 => 0,
    37 => 0,
    38 => 0,
    39 => 0,
    40 => 0,
  );
  $handler->display->display_options['path'] = 'admin/content/opl/imagine-space-equipment';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Imagine Space Equipment / Products';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block - Slideshow */
  $handler = $view->new_display('block', 'Block - Slideshow', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Branch */
  $handler->display->display_options['fields']['field_branch']['id'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['table'] = 'field_data_field_branch';
  $handler->display->display_options['fields']['field_branch']['field'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_branch']['delta_offset'] = '0';
  /* Field: Content: Requires Certification */
  $handler->display->display_options['fields']['field_requires_certification']['id'] = 'field_requires_certification';
  $handler->display->display_options['fields']['field_requires_certification']['table'] = 'field_data_field_requires_certification';
  $handler->display->display_options['fields']['field_requires_certification']['field'] = 'field_requires_certification';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'equipment' => 'equipment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Equipment List - Flexslider';

  /* Display: Block - Grid */
  $handler = $view->new_display('block', 'Block - Grid', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Branch */
  $handler->display->display_options['fields']['field_branch']['id'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['table'] = 'field_data_field_branch';
  $handler->display->display_options['fields']['field_branch']['field'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_branch']['delta_offset'] = '0';
  /* Field: Content: Requires Certification */
  $handler->display->display_options['fields']['field_requires_certification']['id'] = 'field_requires_certification';
  $handler->display->display_options['fields']['field_requires_certification']['table'] = 'field_data_field_requires_certification';
  $handler->display->display_options['fields']['field_requires_certification']['field'] = 'field_requires_certification';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Clone link */
  $handler->display->display_options['fields']['clone_node']['id'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['table'] = 'node';
  $handler->display->display_options['fields']['clone_node']['field'] = 'clone_node';
  $handler->display->display_options['fields']['clone_node']['label'] = '';
  $handler->display->display_options['fields']['clone_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'equipment' => 'equipment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Equipment List - Grid';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'masonry';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '100',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Content: Branch */
  $handler->display->display_options['fields']['field_branch']['id'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['table'] = 'field_data_field_branch';
  $handler->display->display_options['fields']['field_branch']['field'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['label'] = '';
  $handler->display->display_options['fields']['field_branch']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_branch']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_branch']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_branch']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Booking and Borrowing */
  $handler->display->display_options['fields']['field_borrowable']['id'] = 'field_borrowable';
  $handler->display->display_options['fields']['field_borrowable']['table'] = 'field_data_field_borrowable';
  $handler->display->display_options['fields']['field_borrowable']['field'] = 'field_borrowable';
  $handler->display->display_options['fields']['field_borrowable']['label'] = '';
  $handler->display->display_options['fields']['field_borrowable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_borrowable']['type'] = 'equipment_booking_link';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['sorts']['nid']['order'] = 'DESC';
  $handler->display->display_options['sorts']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'equipment' => 'equipment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'produits';

  /* Display: Content pane 1 */
  $handler = $view->new_display('panel_pane', 'Content pane 1', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Branch */
  $handler->display->display_options['fields']['field_branch']['id'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['table'] = 'field_data_field_branch';
  $handler->display->display_options['fields']['field_branch']['field'] = 'field_branch';
  $handler->display->display_options['fields']['field_branch']['label'] = '';
  $handler->display->display_options['fields']['field_branch']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_branch']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_branch']['delta_offset'] = '0';
  /* Field: Content: ID Required */
  $handler->display->display_options['fields']['field_id_required']['id'] = 'field_id_required';
  $handler->display->display_options['fields']['field_id_required']['table'] = 'field_data_field_id_required';
  $handler->display->display_options['fields']['field_id_required']['field'] = 'field_id_required';
  $handler->display->display_options['fields']['field_id_required']['label'] = '';
  $handler->display->display_options['fields']['field_id_required']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_id_required']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_id_required']['empty_zero'] = TRUE;
  /* Field: Content: Requires Certification */
  $handler->display->display_options['fields']['field_requires_certification']['id'] = 'field_requires_certification';
  $handler->display->display_options['fields']['field_requires_certification']['table'] = 'field_data_field_requires_certification';
  $handler->display->display_options['fields']['field_requires_certification']['field'] = 'field_requires_certification';
  $handler->display->display_options['fields']['field_requires_certification']['label'] = '';
  $handler->display->display_options['fields']['field_requires_certification']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_requires_certification']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_requires_certification']['empty_zero'] = TRUE;
  /* Field: Content: Booking and Borrowing */
  $handler->display->display_options['fields']['field_borrowable']['id'] = 'field_borrowable';
  $handler->display->display_options['fields']['field_borrowable']['table'] = 'field_data_field_borrowable';
  $handler->display->display_options['fields']['field_borrowable']['field'] = 'field_borrowable';
  $handler->display->display_options['fields']['field_borrowable']['label'] = '';
  $handler->display->display_options['fields']['field_borrowable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_borrowable']['type'] = 'equipment_booking_link';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'equipment' => 'equipment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: Content pane 2 */
  $handler = $view->new_display('panel_pane', 'Content pane 2', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Available Software (field_available_software1) - reverse */
  $handler->display->display_options['relationships']['reverse_field_available_software1_node']['id'] = 'reverse_field_available_software1_node';
  $handler->display->display_options['relationships']['reverse_field_available_software1_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_available_software1_node']['field'] = 'reverse_field_available_software1_node';
  /* Relationship: Content: Guide (field_guide) */
  $handler->display->display_options['relationships']['field_guide_nid']['id'] = 'field_guide_nid';
  $handler->display->display_options['relationships']['field_guide_nid']['table'] = 'field_data_field_guide';
  $handler->display->display_options['relationships']['field_guide_nid']['field'] = 'field_guide_nid';
  $handler->display->display_options['relationships']['field_guide_nid']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Available Software */
  $handler->display->display_options['fields']['field_available_software1']['id'] = 'field_available_software1';
  $handler->display->display_options['fields']['field_available_software1']['table'] = 'field_data_field_available_software1';
  $handler->display->display_options['fields']['field_available_software1']['field'] = 'field_available_software1';
  $handler->display->display_options['fields']['field_available_software1']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_available_software1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_available_software1']['delta_offset'] = '0';
  /* Field: Entity translation: Available Software: translated */
  $handler->display->display_options['fields']['field_available_software1_et']['id'] = 'field_available_software1_et';
  $handler->display->display_options['fields']['field_available_software1_et']['table'] = 'field_data_field_available_software1';
  $handler->display->display_options['fields']['field_available_software1_et']['field'] = 'field_available_software1_et';
  $handler->display->display_options['fields']['field_available_software1_et']['relationship'] = 'reverse_field_available_software1_node';
  $handler->display->display_options['fields']['field_available_software1_et']['label'] = 'Related Hardware';
  $handler->display->display_options['fields']['field_available_software1_et']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_available_software1_et']['delta_offset'] = '0';
  /* Field: Content: Software or Hardware */
  $handler->display->display_options['fields']['field_software_or_hardware']['id'] = 'field_software_or_hardware';
  $handler->display->display_options['fields']['field_software_or_hardware']['table'] = 'field_data_field_software_or_hardware';
  $handler->display->display_options['fields']['field_software_or_hardware']['field'] = 'field_software_or_hardware';
  $handler->display->display_options['fields']['field_software_or_hardware']['label'] = 'Equipment Type';
  $handler->display->display_options['fields']['field_software_or_hardware']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_software_or_hardware']['hide_empty'] = TRUE;
  /* Field: Content: Project Type */
  $handler->display->display_options['fields']['field_project_ttype']['id'] = 'field_project_ttype';
  $handler->display->display_options['fields']['field_project_ttype']['table'] = 'field_data_field_project_ttype';
  $handler->display->display_options['fields']['field_project_ttype']['field'] = 'field_project_ttype';
  $handler->display->display_options['fields']['field_project_ttype']['label'] = 'Project Types';
  $handler->display->display_options['fields']['field_project_ttype']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_project_ttype']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_project_ttype']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_guide_nid';
  $handler->display->display_options['fields']['title']['label'] = 'Help guide';
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'equipment' => 'equipment',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['inherit_panels_path'] = '1';
  $translatables['equipment'] = array(
    t('Master'),
    t('Imagine Space Equipment '),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('- Choose an operation -'),
    t('Nid'),
    t('Image'),
    t('Body'),
    t('Branch'),
    t('Requires Certification'),
    t('Booking and Borrowing'),
    t('Title'),
    t('Search Terms'),
    t('Page'),
    t('Borrowable'),
    t('Block - Slideshow'),
    t('Equipment List - Flexslider'),
    t('Block - Grid'),
    t('Equipment List - Grid'),
    t('Content pane 1'),
    t('All'),
    t('View panes'),
    t('Content pane 2'),
    t('field_available_software1'),
    t('field_guide'),
    t('Available Software'),
    t('Related Hardware'),
    t('Equipment Type'),
    t('Project Types'),
    t('Help guide'),
  );
  $export['equipment'] = $view;

  $view = new view();
  $view->name = 'equipment_public_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_equipment';
  $view->human_name = 'Equipment Landing Page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Equipment available at OPL';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Guide */
  $handler->display->display_options['fields']['field_guide']['id'] = 'field_guide';
  $handler->display->display_options['fields']['field_guide']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['field_guide']['field'] = 'field_guide';
  $handler->display->display_options['fields']['field_guide']['label'] = 'Help Guide';
  $handler->display->display_options['fields']['field_guide']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_guide']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_guide']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_guide']['bypass_access'] = 0;
  /* Field: Indexed Content: Project Type */
  $handler->display->display_options['fields']['field_project_ttype']['id'] = 'field_project_ttype';
  $handler->display->display_options['fields']['field_project_ttype']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['field_project_ttype']['field'] = 'field_project_ttype';
  $handler->display->display_options['fields']['field_project_ttype']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_project_ttype']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_project_ttype']['bypass_access'] = 0;
  /* Field: Indexed Content: Software or Hardware */
  $handler->display->display_options['fields']['field_software_or_hardware']['id'] = 'field_software_or_hardware';
  $handler->display->display_options['fields']['field_software_or_hardware']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['field_software_or_hardware']['field'] = 'field_software_or_hardware';
  $handler->display->display_options['fields']['field_software_or_hardware']['label'] = '';
  $handler->display->display_options['fields']['field_software_or_hardware']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_software_or_hardware']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Available Software */
  $handler->display->display_options['fields']['field_available_software1']['id'] = 'field_available_software1';
  $handler->display->display_options['fields']['field_available_software1']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['field_available_software1']['field'] = 'field_available_software1';
  $handler->display->display_options['fields']['field_available_software1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_available_software1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_available_software1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_available_software1']['bypass_access'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Indexed Content: Sticky in lists */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Indexed Content: Software or Hardware */
  $handler->display->display_options['sorts']['field_software_or_hardware']['id'] = 'field_software_or_hardware';
  $handler->display->display_options['sorts']['field_software_or_hardware']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['sorts']['field_software_or_hardware']['field'] = 'field_software_or_hardware';
  /* Sort criterion: Indexed Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['sorts']['title']['field'] = 'title';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Content: The main body text */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Guide */
  $handler->display->display_options['fields']['field_guide']['id'] = 'field_guide';
  $handler->display->display_options['fields']['field_guide']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['field_guide']['field'] = 'field_guide';
  $handler->display->display_options['fields']['field_guide']['label'] = 'Help Guide';
  $handler->display->display_options['fields']['field_guide']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_guide']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_guide']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_guide']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_guide']['bypass_access'] = 0;
  /* Field: Indexed Content: Project Type */
  $handler->display->display_options['fields']['field_project_ttype']['id'] = 'field_project_ttype';
  $handler->display->display_options['fields']['field_project_ttype']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['field_project_ttype']['field'] = 'field_project_ttype';
  $handler->display->display_options['fields']['field_project_ttype']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_project_ttype']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_project_ttype']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_project_ttype']['bypass_access'] = 0;
  /* Field: Indexed Content: Software or Hardware */
  $handler->display->display_options['fields']['field_software_or_hardware']['id'] = 'field_software_or_hardware';
  $handler->display->display_options['fields']['field_software_or_hardware']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['field_software_or_hardware']['field'] = 'field_software_or_hardware';
  $handler->display->display_options['fields']['field_software_or_hardware']['label'] = '';
  $handler->display->display_options['fields']['field_software_or_hardware']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_software_or_hardware']['element_label_colon'] = FALSE;
  /* Field: Indexed Content: Available Software */
  $handler->display->display_options['fields']['field_available_software1']['id'] = 'field_available_software1';
  $handler->display->display_options['fields']['field_available_software1']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['field_available_software1']['field'] = 'field_available_software1';
  $handler->display->display_options['fields']['field_available_software1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_available_software1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_available_software1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_available_software1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_available_software1']['bypass_access'] = 0;
  /* Field: Indexed Content: Booking and Borrowing */
  $handler->display->display_options['fields']['field_borrowable']['id'] = 'field_borrowable';
  $handler->display->display_options['fields']['field_borrowable']['table'] = 'search_api_index_equipment';
  $handler->display->display_options['fields']['field_borrowable']['field'] = 'field_borrowable';
  $handler->display->display_options['fields']['field_borrowable']['label'] = '';
  $handler->display->display_options['fields']['field_borrowable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_borrowable']['type'] = 'equipment_booking_link';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'equipment';
  $translatables['equipment_public_list'] = array(
    t('Master'),
    t('Equipment available at OPL'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('.'),
    t('Help Guide'),
    t('Project Type'),
    t('Available Software'),
    t('Page'),
  );
  $export['equipment_public_list'] = $view;

  return $export;
}

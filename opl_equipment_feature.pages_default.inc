<?php
/**
 * @file
 * opl_equipment_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function opl_equipment_feature_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__equipment';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Equipment',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'equipment',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'equipment' => 'equipment',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_70_30_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c24709d7-a09b-4e1b-a49b-df569fd1d957';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__equipment';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-121be2d4-641c-411c-ba3d-90c4ea044c92';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'equipment-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '121be2d4-641c-411c-ba3d-90c4ea044c92';
  $display->content['new-121be2d4-641c-411c-ba3d-90c4ea044c92'] = $pane;
  $display->panels['left'][0] = 'new-121be2d4-641c-411c-ba3d-90c4ea044c92';
  $pane = new stdClass();
  $pane->pid = 'new-1fc1153d-45d5-43df-a6c9-02c1afa99186';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_available_software1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'node_reference_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1fc1153d-45d5-43df-a6c9-02c1afa99186';
  $display->content['new-1fc1153d-45d5-43df-a6c9-02c1afa99186'] = $pane;
  $display->panels['right'][0] = 'new-1fc1153d-45d5-43df-a6c9-02c1afa99186';
  $pane = new stdClass();
  $pane->pid = 'new-3b43bc06-6c74-432b-a8f5-0f1527a7f2cd';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_requires_certification';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'i18n_list_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3b43bc06-6c74-432b-a8f5-0f1527a7f2cd';
  $display->content['new-3b43bc06-6c74-432b-a8f5-0f1527a7f2cd'] = $pane;
  $display->panels['right'][1] = 'new-3b43bc06-6c74-432b-a8f5-0f1527a7f2cd';
  $pane = new stdClass();
  $pane->pid = 'new-70f0d069-18e4-4071-b4ef-80ec9afe4af9';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'equipment-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '70f0d069-18e4-4071-b4ef-80ec9afe4af9';
  $display->content['new-70f0d069-18e4-4071-b4ef-80ec9afe4af9'] = $pane;
  $display->panels['right'][2] = 'new-70f0d069-18e4-4071-b4ef-80ec9afe4af9';
  $pane = new stdClass();
  $pane->pid = 'new-8dfd9efb-53d0-422c-a703-206351801ee4';
  $pane->panel = 'top';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'title_linked',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'title_style' => 'h1',
      'title_link' => '',
      'title_class' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8dfd9efb-53d0-422c-a703-206351801ee4';
  $display->content['new-8dfd9efb-53d0-422c-a703-206351801ee4'] = $pane;
  $display->panels['top'][0] = 'new-8dfd9efb-53d0-422c-a703-206351801ee4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__equipment'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_8a98c137-1c37-462c-aa17-827e828a909a';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'Imagine space / location',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'location' => 'location',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '34ce3ab5-07a2-43db-994f-a3c4c0e270d8';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_8a98c137-1c37-462c-aa17-827e828a909a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9d2beaf0-b986-44e6-b2f1-369185d9f061';
  $pane->panel = 'bottom';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9d2beaf0-b986-44e6-b2f1-369185d9f061';
  $display->content['new-9d2beaf0-b986-44e6-b2f1-369185d9f061'] = $pane;
  $display->panels['bottom'][0] = 'new-9d2beaf0-b986-44e6-b2f1-369185d9f061';
  $pane = new stdClass();
  $pane->pid = 'new-f871ac61-db3e-4a7d-aacd-65b60d60b61d';
  $pane->panel = 'bottom';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f871ac61-db3e-4a7d-aacd-65b60d60b61d';
  $display->content['new-f871ac61-db3e-4a7d-aacd-65b60d60b61d'] = $pane;
  $display->panels['bottom'][1] = 'new-f871ac61-db3e-4a7d-aacd-65b60d60b61d';
  $pane = new stdClass();
  $pane->pid = 'new-7485c673-c1e7-4b8d-a44b-a2593e685d61';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'branch_title_with_address',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7485c673-c1e7-4b8d-a44b-a2593e685d61';
  $display->content['new-7485c673-c1e7-4b8d-a44b-a2593e685d61'] = $pane;
  $display->panels['left'][0] = 'new-7485c673-c1e7-4b8d-a44b-a2593e685d61';
  $pane = new stdClass();
  $pane->pid = 'new-1821d84f-0d65-4520-997c-4ea18c391f6c';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'opl_overrides-opl_opening_hours';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1821d84f-0d65-4520-997c-4ea18c391f6c';
  $display->content['new-1821d84f-0d65-4520-997c-4ea18c391f6c'] = $pane;
  $display->panels['left'][1] = 'new-1821d84f-0d65-4520-997c-4ea18c391f6c';
  $pane = new stdClass();
  $pane->pid = 'new-db7aa3ac-b769-4941-a258-ad48a4459b82';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_branch_leaflet_geofield';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'geofield_leaflet',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'leaflet_map' => 'OSM Mapnik',
      'height' => '400',
      'popup' => array(
        'show' => 0,
        'text' => '',
      ),
      'zoom' => array(
        'initialZoom' => '-1',
        'minZoom' => '1',
        'maxZoom' => '-1',
        'scrollWheelZoom' => 1,
      ),
      'icon' => array(
        'iconType' => 'marker',
        'iconUrl' => '',
        'shadowUrl' => '',
        'html' => '',
        'iconImageStyle' => '',
        'htmlClass' => '',
        'iconSize' => array(
          'x' => '',
          'y' => '',
        ),
        'iconAnchor' => array(
          'x' => '',
          'y' => '',
        ),
        'shadowAnchor' => array(
          'x' => '',
          'y' => '',
        ),
        'popupAnchor' => array(
          'x' => '',
          'y' => '',
        ),
      ),
      'vector_display' => array(
        'stroke_override' => 0,
        'stroke' => 1,
        'color' => '',
        'weight' => '',
        'opacity' => '',
        'dashArray' => '',
        'fill' => 1,
        'fillColor' => '',
        'fillOpacity' => '',
        'clickable' => 1,
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'db7aa3ac-b769-4941-a258-ad48a4459b82';
  $display->content['new-db7aa3ac-b769-4941-a258-ad48a4459b82'] = $pane;
  $display->panels['right'][0] = 'new-db7aa3ac-b769-4941-a258-ad48a4459b82';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_8a98c137-1c37-462c-aa17-827e828a909a'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function opl_equipment_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'imagine_space';
  $page->task = 'page';
  $page->admin_title = 'Imagine';
  $page->admin_description = '';
  $page->path = 'imagine_new';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_imagine_space__panel';
  $handler->task = 'page';
  $handler->subtask = 'imagine_space';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Imagine space';
  $display->uuid = 'b11bfe7b-8ab9-479d-a9cd-840fd135394f';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_imagine_space__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0bac3f22-9059-4e95-992b-8f2958137b6c';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'about_landing_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_8',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'landing',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0bac3f22-9059-4e95-992b-8f2958137b6c';
  $display->content['new-0bac3f22-9059-4e95-992b-8f2958137b6c'] = $pane;
  $display->panels['middle'][0] = 'new-0bac3f22-9059-4e95-992b-8f2958137b6c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0bac3f22-9059-4e95-992b-8f2958137b6c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['imagine_space'] = $page;

  return $pages;

}

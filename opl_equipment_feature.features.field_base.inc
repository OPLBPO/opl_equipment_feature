<?php
/**
 * @file
 * opl_equipment_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function opl_equipment_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_available_software1'.
  $field_bases['field_available_software1'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_available_software1',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
      'referenceable_types' => array(
        'availability_node' => 0,
        'blog' => 0,
        'board_meeting' => 0,
        'book' => 0,
        'bookmobile_location' => 0,
        'branch_features' => 0,
        'branch_hours' => 0,
        'branch_item' => 0,
        'branch_meeting_room' => 0,
        'calendar_entry' => 0,
        'collections' => 0,
        'database' => 0,
        'digital_signage_entry' => 0,
        'directory_item' => 0,
        'directory_item_multiple_location' => 0,
        'equipment' => 'equipment',
        'event' => 0,
        'featured_event' => 0,
        'feed' => 0,
        'forum' => 0,
        'frequently_asked_question' => 0,
        'help_guide' => 0,
        'homepage_content_slider' => 0,
        'human_book' => 0,
        'internal_branch_information' => 0,
        'kiosk_location' => 0,
        'landing_page' => 0,
        'mediaroom' => 0,
        'oplpage' => 0,
        'page' => 0,
        'panel' => 0,
        'pathfinder' => 0,
        'pathfinder_resource' => 0,
        'policy' => 0,
        'profile' => 0,
        'profile_blogger' => 0,
        'profile_board_committee' => 0,
        'site_announcement' => 0,
        'site_text' => 0,
        'special_event' => 0,
        'staff_contact_form' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 1,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_booking_type'.
  $field_bases['field_booking_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_booking_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'Not available for booking',
        2 => 'Online Booking System (Desktop Computers)',
        3 => 'OPL Website',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_borrowable'.
  $field_bases['field_borrowable'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_borrowable',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => '7 days loan, not holdable',
        2 => '2 hours loan, in branch only',
        0 => 'Bookable',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_guide'.
  $field_bases['field_guide'] = array(
    'active' => 1,
    'cardinality' => 3,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_guide',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
      'referenceable_types' => array(
        'availability_node' => 0,
        'blog' => 0,
        'board_meeting' => 0,
        'book' => 0,
        'bookmobile_location' => 0,
        'branch_features' => 0,
        'branch_hours' => 0,
        'branch_item' => 0,
        'branch_meeting_room' => 0,
        'calendar_entry' => 0,
        'collections' => 0,
        'database' => 0,
        'digital_signage_entry' => 0,
        'directory_item' => 0,
        'directory_item_multiple_location' => 0,
        'equipment' => 0,
        'event' => 0,
        'featured_event' => 0,
        'feed' => 0,
        'forum' => 0,
        'frequently_asked_question' => 0,
        'help_guide' => 'help_guide',
        'homepage_content_slider' => 0,
        'human_book' => 0,
        'internal_branch_information' => 0,
        'kiosk_location' => 0,
        'landing_page' => 0,
        'mediaroom' => 0,
        'oplpage' => 0,
        'page' => 0,
        'panel' => 0,
        'pathfinder' => 0,
        'pathfinder_resource' => 0,
        'policy' => 0,
        'profile' => 0,
        'profile_blogger' => 0,
        'profile_board_committee' => 0,
        'site_announcement' => 0,
        'site_text' => 0,
        'special_event' => 0,
        'staff_contact_form' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_id_required'.
  $field_bases['field_id_required'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_id_required',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'ID not required',
        1 => 'ID required',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_project_ttype'.
  $field_bases['field_project_ttype'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_project_ttype',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'imagine_space_project_streams',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_software_or_hardware'.
  $field_bases['field_software_or_hardware'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_software_or_hardware',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'Hardware',
        2 => 'Software - PC workstations',
        3 => 'Software - Mac Pros',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_staff_equipment'.
  $field_bases['field_staff_equipment'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_staff_equipment',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'No',
        1 => 'Yes',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}

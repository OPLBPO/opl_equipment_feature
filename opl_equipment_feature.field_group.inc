<?php
/**
 * @file
 * opl_equipment_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function opl_equipment_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_booking|node|equipment|form';
  $field_group->group_name = 'group_booking';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'equipment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Booking / Certification',
    'weight' => '1',
    'children' => array(
      0 => 'field_requires_certification',
      1 => 'field_borrowable',
      2 => 'field_id_required',
      3 => 'field_booking_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-booking field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_booking|node|equipment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_branch|node|equipment|form';
  $field_group->group_name = 'group_branch';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'equipment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Branch / Hours',
    'weight' => '2',
    'children' => array(
      0 => 'field_branch',
      1 => 'field_availability',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-branch field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_branch|node|equipment|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title|node|equipment|form';
  $field_group->group_name = 'group_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'equipment';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title / Description',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'body',
      2 => 'field_image',
      3 => 'field_guide',
      4 => 'field_project_ttype',
      5 => 'field_available_software1',
      6 => 'field_software_or_hardware',
      7 => 'locations',
      8 => 'path',
      9 => 'xmlsitemap',
      10 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-title field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_title|node|equipment|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Booking / Certification');
  t('Branch / Hours');
  t('Title / Description');

  return $field_groups;
}

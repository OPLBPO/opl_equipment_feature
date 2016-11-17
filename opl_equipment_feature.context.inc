<?php
/**
 * @file
 * opl_equipment_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function opl_equipment_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'equipment_landing_page';
  $context->description = 'Equipment landing page';
  $context->tag = 'individual pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'equipment' => 'equipment',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Equipment landing page');
  t('individual pages');
  $export['equipment_landing_page'] = $context;

  return $export;
}

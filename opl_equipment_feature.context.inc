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
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-6VH7oGCw8gReAH0rhP54vBZXNm8o50PB' => array(
          'module' => 'facetapi',
          'delta' => '6VH7oGCw8gReAH0rhP54vBZXNm8o50PB',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-fTwWVcR03lsQHzSEY05pgy8L0bNhYI7s' => array(
          'module' => 'facetapi',
          'delta' => 'fTwWVcR03lsQHzSEY05pgy8L0bNhYI7s',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-mUPA56ZRxb1ieg1y7CpqvGRzdXHDS1zz' => array(
          'module' => 'facetapi',
          'delta' => 'mUPA56ZRxb1ieg1y7CpqvGRzdXHDS1zz',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
        'facetapi-qVc30oqYArYK81Wudvd0ENvL7SFNbmW1' => array(
          'module' => 'facetapi',
          'delta' => 'qVc30oqYArYK81Wudvd0ENvL7SFNbmW1',
          'region' => 'sidebar_first',
          'weight' => '-7',
        ),
        'facetapi-p7wcZc83GaTlEP429raZk578oYeazpxF' => array(
          'module' => 'facetapi',
          'delta' => 'p7wcZc83GaTlEP429raZk578oYeazpxF',
          'region' => 'sidebar_first',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Equipment landing page');
  t('individual pages');
  $export['equipment_landing_page'] = $context;

  return $export;
}

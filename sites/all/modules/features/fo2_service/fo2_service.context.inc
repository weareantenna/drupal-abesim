<?php
/**
 * @file
 * fo2_service.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fo2_service_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'our_services';
  $context->description = 'Services Detail Views';
  $context->tag = 'Solutions';
  $context->conditions = array(
    'context_uuid' => array(
      'values' => array(
        'node:d25518cd-b755-43a5-9cc8-cea054de8fdc' => 'node:d25518cd-b755-43a5-9cc8-cea054de8fdc',
        'node:17d82f40-0221-4485-b249-378a9ca8b631' => 'node:17d82f40-0221-4485-b249-378a9ca8b631',
        'node:65b7a960-f7b2-4f7a-8ea3-56b05575ebd4' => 'node:65b7a960-f7b2-4f7a-8ea3-56b05575ebd4',
        'node:d300b282-777e-4705-8438-0c6618d9d7a0' => 'node:d300b282-777e-4705-8438-0c6618d9d7a0',
        'node:8dc1860b-71e2-42a2-8c51-4cc54832d06f' => 'node:8dc1860b-71e2-42a2-8c51-4cc54832d06f',
        'node:cd8d011e-7e1c-4282-812d-8a43b58b1660' => 'node:cd8d011e-7e1c-4282-812d-8a43b58b1660',
        'node:9a3e0263-e868-4bff-bc13-97c6e6a26bd4' => 'node:9a3e0263-e868-4bff-bc13-97c6e6a26bd4',
        'node:c414dbe0-6cf3-4f8d-86dd-cbe89c840e8b' => 'node:c414dbe0-6cf3-4f8d-86dd-cbe89c840e8b',
        'node:1ca9c7ad-cf42-4244-8de7-ba6601374647' => 'node:1ca9c7ad-cf42-4244-8de7-ba6601374647',
        'node:286b2317-f8fe-4ee7-84c1-c9f5ba3a2197' => 'node:286b2317-f8fe-4ee7-84c1-c9f5ba3a2197',
        'node:37cf46ae-c7d7-4abc-84b4-018ae8c89b88' => 'node:37cf46ae-c7d7-4abc-84b4-018ae8c89b88',
        'node:d4c49c53-a129-4497-90e8-94f6fbbe1654' => 'node:d4c49c53-a129-4497-90e8-94f6fbbe1654',
        'node:190db27c-b2c1-4f19-9d08-03ed9678af85' => 'node:190db27c-b2c1-4f19-9d08-03ed9678af85',
        'node:7ce80d99-2dfe-4495-b9ac-10320db9ce15' => 'node:7ce80d99-2dfe-4495-b9ac-10320db9ce15',
        'node:4ac0f8ad-1fcb-4f4c-9b13-19647664d9cc' => 'node:4ac0f8ad-1fcb-4f4c-9b13-19647664d9cc',
        'node:a8eb0100-5fea-417b-8b72-6fd49d61948a' => 'node:a8eb0100-5fea-417b-8b72-6fd49d61948a',
        'node:ea80520f-286c-4e79-9762-566aef7a23d3' => 'node:ea80520f-286c-4e79-9762-566aef7a23d3',
        'node:9e03761d-cf8a-4fd4-89a5-82b46bccfd69' => 'node:9e03761d-cf8a-4fd4-89a5-82b46bccfd69',
        'node:bded9b7d-7e67-416b-8a61-b852c4fb0e87' => 'node:bded9b7d-7e67-416b-8a61-b852c4fb0e87',
        'node:39d3413a-022b-4ebe-84f8-27ee9426dba0' => 'node:39d3413a-022b-4ebe-84f8-27ee9426dba0',
      ),
    ),
    'path' => array(
      'values' => array(
        '~node/*/*' => '~node/*/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-service-block' => array(
          'module' => 'views',
          'delta' => 'service-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Services Detail Views');
  t('Solutions');
  $export['our_services'] = $context;

  return $export;
}

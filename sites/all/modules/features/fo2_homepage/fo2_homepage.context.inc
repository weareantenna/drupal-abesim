<?php
/**
 * @file
 * fo2_homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fo2_homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = 'Homepage';
  $context->conditions = array(
    'context_uuid' => array(
      'values' => array(
        'node:6a09246b-ced7-410d-b4c9-79765cbca82b' => 'node:6a09246b-ced7-410d-b4c9-79765cbca82b',
        'node:73eaa7b6-7050-4238-a81c-b41295c6a665' => 'node:73eaa7b6-7050-4238-a81c-b41295c6a665',
        'node:f2caa064-2969-4399-8757-0189f688d294' => 'node:f2caa064-2969-4399-8757-0189f688d294',
        'node:dc34e4d7-198d-418f-947e-c1ac70d5b96d' => 'node:dc34e4d7-198d-418f-947e-c1ac70d5b96d',
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
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'header',
          'weight' => '-10',
        ),
        'menu_block-6' => array(
          'module' => 'menu_block',
          'delta' => '6',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'views-showcase-block' => array(
          'module' => 'views',
          'delta' => 'showcase-block',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-homepage_blocks-block' => array(
          'module' => 'views',
          'delta' => 'homepage_blocks-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'ds_extras-lowlighted_page' => array(
          'module' => 'ds_extras',
          'delta' => 'lowlighted_page',
          'region' => 'lowlighted',
          'weight' => '-10',
        ),
        'fo2_block-o2_block_550a1eeb-216a-44cf-8282-e073e382f570' => array(
          'module' => 'fo2_block',
          'delta' => 'o2_block_550a1eeb-216a-44cf-8282-e073e382f570',
          'region' => 'doormat_left',
          'weight' => '-10',
        ),
        'fo2_block-o2_block_1b3da7d9-6907-4397-88d0-def20413a49f' => array(
          'module' => 'fo2_block',
          'delta' => 'o2_block_1b3da7d9-6907-4397-88d0-def20413a49f',
          'region' => 'doormat_left',
          'weight' => '-9',
        ),
        'fo2_block-o2_block_e86bdc70-48cc-46c3-b9db-835bb0470f68' => array(
          'module' => 'fo2_block',
          'delta' => 'o2_block_e86bdc70-48cc-46c3-b9db-835bb0470f68',
          'region' => 'doormat_left',
          'weight' => '-8',
        ),
        'fo2_block-o2_block_65b6bb79-d190-47b4-9498-7e9ab69a9102' => array(
          'module' => 'fo2_block',
          'delta' => 'o2_block_65b6bb79-d190-47b4-9498-7e9ab69a9102',
          'region' => 'doormat_left',
          'weight' => '-7',
        ),
        'menu_block-5' => array(
          'module' => 'menu_block',
          'delta' => '5',
          'region' => 'doormat_middle',
          'weight' => '-36',
        ),
        'fo2_block-o2_block_96a66101-9daa-4fe6-a4ad-957b35e43c17' => array(
          'module' => 'fo2_block',
          'delta' => 'o2_block_96a66101-9daa-4fe6-a4ad-957b35e43c17',
          'region' => 'doormat_middle',
          'weight' => '-35',
        ),
        'fo2_block-o2_block_49cdadeb-9597-4554-9551-8f4a802144a0' => array(
          'module' => 'fo2_block',
          'delta' => 'o2_block_49cdadeb-9597-4554-9551-8f4a802144a0',
          'region' => 'doormat_middle',
          'weight' => NULL,
        ),
        'fo2_block-o2_block_bee06842-6b61-4b6a-9aef-6327ce7d9909' => array(
          'module' => 'fo2_block',
          'delta' => 'o2_block_bee06842-6b61-4b6a-9aef-6327ce7d9909',
          'region' => 'doormat_middle',
          'weight' => NULL,
        ),
        'fo2_block-o2_block_ffe1413e-9324-4f60-97ef-d2455c5d4326' => array(
          'module' => 'fo2_block',
          'delta' => 'o2_block_ffe1413e-9324-4f60-97ef-d2455c5d4326',
          'region' => 'doormat_middle',
          'weight' => NULL,
        ),
        'menu_block-7' => array(
          'module' => 'menu_block',
          'delta' => '7',
          'region' => 'doormat_right',
          'weight' => '-10',
        ),
        'menu_block-8' => array(
          'module' => 'menu_block',
          'delta' => '8',
          'region' => 'doormat_right',
          'weight' => '-9',
        ),
        'menu_block-9' => array(
          'module' => 'menu_block',
          'delta' => '9',
          'region' => 'doormat_right',
          'weight' => '-8',
        ),
        'menu_block-10' => array(
          'module' => 'menu_block',
          'delta' => '10',
          'region' => 'doormat_right',
          'weight' => '-7',
        ),
        'fo2_block-o2_block_50efddd3-bbaa-428b-9d64-a1921caf1427' => array(
          'module' => 'fo2_block',
          'delta' => 'o2_block_50efddd3-bbaa-428b-9d64-a1921caf1427',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'fo2_block-o2_block_b048b90e-f6ad-4da7-9cb7-1fd6113e3b4d' => array(
          'module' => 'fo2_block',
          'delta' => 'o2_block_b048b90e-f6ad-4da7-9cb7-1fd6113e3b4d',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'fo2_block-o2_block_fa53c737-720a-4fc1-b60e-fed87f541bb9' => array(
          'module' => 'fo2_block',
          'delta' => 'o2_block_fa53c737-720a-4fc1-b60e-fed87f541bb9',
          'region' => 'footer',
          'weight' => '-8',
        ),
        'fo2_block-o2_block_6c1b38ac-5358-4c2e-908c-bfd9d9e9bb9e' => array(
          'module' => 'fo2_block',
          'delta' => 'o2_block_6c1b38ac-5358-4c2e-908c-bfd9d9e9bb9e',
          'region' => 'footer',
          'weight' => '-7',
        ),
      ),
      'layout' => 'front',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Homepage');
  $export['homepage'] = $context;

  return $export;
}

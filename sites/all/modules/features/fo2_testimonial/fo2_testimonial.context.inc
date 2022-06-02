<?php
/**
 * @file
 * fo2_testimonial.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fo2_testimonial_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'testimonial_overview';
  $context->description = 'Testimonial Overview Page';
  $context->tag = 'Solutions';
  $context->conditions = array(
    'context_uuid' => array(
      'values' => array(
        'node:c615f9cc-6b27-45dc-80f4-936280e6010a' => 'node:c615f9cc-6b27-45dc-80f4-936280e6010a',
        'node:9fd62c69-0816-44ce-9479-f4a5c431cae8' => 'node:9fd62c69-0816-44ce-9479-f4a5c431cae8',
        'node:60ffa07b-032b-4592-a881-1334122ecab9' => 'node:60ffa07b-032b-4592-a881-1334122ecab9',
        'node:bd4ab3a4-979c-4131-88a0-969d773bd1f7' => 'node:bd4ab3a4-979c-4131-88a0-969d773bd1f7',
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
        'views-testimonials-block_1' => array(
          'module' => 'views',
          'delta' => 'testimonials-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Solutions');
  t('Testimonial Overview Page');
  $export['testimonial_overview'] = $context;

  return $export;
}

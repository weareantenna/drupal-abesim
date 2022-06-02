<?php
/**
 * @file
 * fo2_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fo2_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_overview';
  $context->description = 'News Overview';
  $context->tag = 'News';
  $context->conditions = array(
    'context_uuid' => array(
      'values' => array(
        'node:2bfe8fbe-b0c0-4b72-b8fe-74069050baf3' => 'node:2bfe8fbe-b0c0-4b72-b8fe-74069050baf3',
        'node:715d0956-2eef-469e-9e95-b378f0fd1ba8' => 'node:715d0956-2eef-469e-9e95-b378f0fd1ba8',
        'node:50259c0f-fca0-4e7b-8480-78a26104acf8' => 'node:50259c0f-fca0-4e7b-8480-78a26104acf8',
        'node:68d7ec30-d23e-4578-aaf2-5a1fac96e011' => 'node:68d7ec30-d23e-4578-aaf2-5a1fac96e011',
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
        'views-news-block_1' => array(
          'module' => 'views',
          'delta' => 'news-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  t('News Overview');
  $export['news_overview'] = $context;

  return $export;
}

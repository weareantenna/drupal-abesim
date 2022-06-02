<?php
/**
 * @file
 * fo2_content.features.uuid_features_menu.inc
 */

/**
 * Implements hook_menu_default_uuid_features_menu().
 */
function fo2_content_menu_default_uuid_features_menu() {
  $menu_uuid_links = array();

  // Exported menu link: 3c3ff714-5a86-4f6b-8f5d-6a392688d816
  $menu_uuid_links['3c3ff714-5a86-4f6b-8f5d-6a392688d816'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Diagnostiek',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => '3c3ff714-5a86-4f6b-8f5d-6a392688d816',
    'language' => 'nl',
    'parent_uuid' => 'f5fcc12a-a02e-4928-aca2-6d4c1aa9637c',
  );
  // Exported menu link: 3fe43720-34cc-4973-9b89-44e01396e357
  $menu_uuid_links['3fe43720-34cc-4973-9b89-44e01396e357'] = array(
    'menu_name' => 'main-menu',
    'router_path' => 'node/%',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'node_type' => 'page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'uuid' => '3fe43720-34cc-4973-9b89-44e01396e357',
    'language' => 'en',
    'uuid_path' => 'node/2bfe8fbe-b0c0-4b72-b8fe-74069050baf3',
  );
  // Exported menu link: 5a961443-c5fa-4b1d-9cc4-17f0b5206103
  $menu_uuid_links['5a961443-c5fa-4b1d-9cc4-17f0b5206103'] = array(
    'menu_name' => 'main-menu',
    'router_path' => 'node/%',
    'link_title' => 'Expertise',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => '5a961443-c5fa-4b1d-9cc4-17f0b5206103',
    'language' => 'nl',
    'parent_uuid' => '5c23b28f-25ce-4a7e-a878-4170ebec0b6e',
    'uuid_path' => 'node/8dc1860b-71e2-42a2-8c51-4cc54832d06f',
  );
  // Exported menu link: 5c23b28f-25ce-4a7e-a878-4170ebec0b6e
  $menu_uuid_links['5c23b28f-25ce-4a7e-a878-4170ebec0b6e'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'uuid' => '5c23b28f-25ce-4a7e-a878-4170ebec0b6e',
    'language' => 'nl',
    'parent_uuid' => 'f5fcc12a-a02e-4928-aca2-6d4c1aa9637c',
  );
  // Exported menu link: 5c5550b4-6212-4845-85b4-f0becb8b3748
  $menu_uuid_links['5c5550b4-6212-4845-85b4-f0becb8b3748'] = array(
    'menu_name' => 'main-menu',
    'router_path' => 'node/%',
    'link_title' => 'Geotechniek',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'uuid' => '5c5550b4-6212-4845-85b4-f0becb8b3748',
    'language' => 'nl',
    'parent_uuid' => '3c3ff714-5a86-4f6b-8f5d-6a392688d816',
    'uuid_path' => 'node/d300b282-777e-4705-8438-0c6618d9d7a0',
  );
  // Exported menu link: 66f032e2-6775-4412-81b2-96c7e714b473
  $menu_uuid_links['66f032e2-6775-4412-81b2-96c7e714b473'] = array(
    'menu_name' => 'main-menu',
    'router_path' => 'node/%',
    'link_title' => 'Nieuws',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'node_type' => 'page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'uuid' => '66f032e2-6775-4412-81b2-96c7e714b473',
    'language' => 'nl',
    'uuid_path' => 'node/715d0956-2eef-469e-9e95-b378f0fd1ba8',
  );
  // Exported menu link: 6d3e7c5a-384f-4628-ac24-33343cd6f62d
  $menu_uuid_links['6d3e7c5a-384f-4628-ac24-33343cd6f62d'] = array(
    'menu_name' => 'main-menu',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'uuid' => '6d3e7c5a-384f-4628-ac24-33343cd6f62d',
    'language' => 'en',
    'uuid_path' => 'node/afedb248-2d9f-4318-95f6-a5c1952225bd',
  );
  // Exported menu link: 8a77875b-b632-40a5-986d-7ff0c070cd2a
  $menu_uuid_links['8a77875b-b632-40a5-986d-7ff0c070cd2a'] = array(
    'menu_name' => 'main-menu',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'uuid' => '8a77875b-b632-40a5-986d-7ff0c070cd2a',
    'language' => 'nl',
    'uuid_path' => 'node/fd4d7e00-d1ba-4740-9674-b2b3116ab8cb',
  );
  // Exported menu link: a3536f2e-feb8-43f9-ba42-aac4e8be80b9
  $menu_uuid_links['a3536f2e-feb8-43f9-ba42-aac4e8be80b9'] = array(
    'menu_name' => 'main-menu',
    'router_path' => 'node/%',
    'link_title' => 'Realisaties',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'main-menu_realisaties:node/29',
      'node_type' => 'page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'uuid' => 'a3536f2e-feb8-43f9-ba42-aac4e8be80b9',
    'language' => 'nl',
    'uuid_path' => 'node/c615f9cc-6b27-45dc-80f4-936280e6010a',
  );
  // Exported menu link: ae942bc3-cb52-4f74-89af-8ac971d7b857
  $menu_uuid_links['ae942bc3-cb52-4f74-89af-8ac971d7b857'] = array(
    'menu_name' => 'main-menu',
    'router_path' => 'node/%',
    'link_title' => 'Jobs',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'uuid' => 'ae942bc3-cb52-4f74-89af-8ac971d7b857',
    'language' => 'nl',
    'uuid_path' => 'node/0be3c125-c1eb-430b-9ffb-a814eafa7409',
  );
  // Exported menu link: af4bc45f-b56e-475f-aa1e-41b17557f0da
  $menu_uuid_links['af4bc45f-b56e-475f-aa1e-41b17557f0da'] = array(
    'menu_name' => 'main-menu',
    'router_path' => 'node/%',
    'link_title' => 'Bouwtechniek',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'uuid' => 'af4bc45f-b56e-475f-aa1e-41b17557f0da',
    'language' => 'nl',
    'parent_uuid' => '3c3ff714-5a86-4f6b-8f5d-6a392688d816',
    'uuid_path' => 'node/65b7a960-f7b2-4f7a-8ea3-56b05575ebd4',
  );
  // Exported menu link: b4de3425-5f49-473b-b6e9-7be8f3b17e7b
  $menu_uuid_links['b4de3425-5f49-473b-b6e9-7be8f3b17e7b'] = array(
    'menu_name' => 'main-menu',
    'router_path' => 'node/%',
    'link_title' => 'Milieu',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'uuid' => 'b4de3425-5f49-473b-b6e9-7be8f3b17e7b',
    'language' => 'nl',
    'parent_uuid' => '3c3ff714-5a86-4f6b-8f5d-6a392688d816',
    'uuid_path' => 'node/d25518cd-b755-43a5-9cc8-cea054de8fdc',
  );
  // Exported menu link: bdb39a48-2278-4379-9b55-4308ddb0447e
  $menu_uuid_links['bdb39a48-2278-4379-9b55-4308ddb0447e'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => 'bdb39a48-2278-4379-9b55-4308ddb0447e',
    'language' => 'nl',
  );
  // Exported menu link: f5fcc12a-a02e-4928-aca2-6d4c1aa9637c
  $menu_uuid_links['f5fcc12a-a02e-4928-aca2-6d4c1aa9637c'] = array(
    'menu_name' => 'main-menu',
    'router_path' => 'node/%',
    'link_title' => 'Onze diensten',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'node_type' => 'page',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'uuid' => 'f5fcc12a-a02e-4928-aca2-6d4c1aa9637c',
    'language' => 'nl',
    'uuid_path' => 'node/286cc568-97db-42a4-990e-055a9ca4e5fa',
  );
  // Exported menu link: f825db79-ecbc-454e-ae30-a6119a4cd920
  $menu_uuid_links['f825db79-ecbc-454e-ae30-a6119a4cd920'] = array(
    'menu_name' => 'main-menu',
    'router_path' => 'node/%',
    'link_title' => 'Milieu',
    'options' => array(
      'node_type' => 'page',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'uuid' => 'f825db79-ecbc-454e-ae30-a6119a4cd920',
    'language' => 'und',
    'parent_uuid' => '5c23b28f-25ce-4a7e-a878-4170ebec0b6e',
    'uuid_path' => 'node/17d82f40-0221-4485-b249-378a9ca8b631',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bouwtechniek');
  t('Contact');
  t('Diagnostiek');
  t('Expertise');
  t('Geotechniek');
  t('Home');
  t('Jobs');
  t('Management');
  t('Milieu');
  t('News');
  t('Nieuws');
  t('Onze diensten');
  t('Realisaties');

  return $menu_uuid_links;
}

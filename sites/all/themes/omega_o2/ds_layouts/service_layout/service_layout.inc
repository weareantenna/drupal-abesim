<?php

  // Fuction name is ds_LAYOUT_KEY
  function ds_service_layout() {
    return array(
      'label' => t('Service Layout'),
      'regions' => array(
        'header_left' => t('Header left'),
        'header_right' => t('Header right'),
        'middle' => t('Middle'),
        'footer' => t('Footer'),
      ),
      // Add this if there is a default css file.
      'css' => TRUE,
      // Add this if there is a default preview image
      'image' => TRUE,
    );
  }
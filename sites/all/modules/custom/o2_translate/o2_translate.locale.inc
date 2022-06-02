<?php

function o2_translate_get_translations() {
  // Define an array for all custom translatable strings used. English is always
  // the source language and should always be defined.
  $translations = array(
    // o2_ean
    array(
      'en' => 'Contact us here',
      'nl' => 'Contacteer ons hier',
      'fr' => '',
    ),
		array(
			'en' => 'Your contacts',
			'nl' => 'Wie zijn we?',
			'fr' => ''
		)
  );

  return $translations;
}

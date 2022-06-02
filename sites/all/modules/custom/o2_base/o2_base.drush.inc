<?php

/**
 * Implements hook_drush_command().
 */
function o2_base_drush_command() {
  $items['site-install-after'] = array(
    'description' => 'After install hook.',
    'options' => array(
      'domain' => dt('Domain name without TLD.'),
      'tld' => dt('TLD for the domain.'),
      'name' => dt('The name of your site.'),
      'mail' => dt('The default mail address to use in Drupal.'),
    ),
    'examples' => array(
      'drush sia --name="O2 Agency" --mail=drupal@o2agency.be' => dt(''),
    ),
    'aliases' => array('sia'),
  );
  return $items;
}

function drush_o2_base_site_install_after() {
  $domain = drush_get_option('domain', '');
  $tld = drush_get_option('tld', '');
  $mail = drush_get_option('mail', '');
  $name = drush_get_option('name', '');

  if (empty($mail) && !empty($domain) && !empty($tld)) {
    $mail = 'info@' . $domain . '.' . $tld;
  }
  if (empty($name) && !empty($domain)) {
    $name = $domain;
  }
  if (empty($name)) {
    $name = variable_get('site_name');
  }
  if (empty($mail)) {
    $mail = variable_get('site_mail');
  }

  _o2_base_install_after($domain, $tld, $mail, $name);
}

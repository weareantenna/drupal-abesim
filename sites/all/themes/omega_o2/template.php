<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * Omega O2 theme.
 */

/**
 * Implements template_breadcrumb().
 */
function omega_o2_breadcrumb(&$variables) {
	$breadcrumb = $variables['breadcrumb'];
	
	if (!empty($breadcrumb) && !drupal_is_front_page()) {
		$breadcrumb[] = drupal_get_title();
	}
	
	return implode('<span class="breadcrumb-separator">></span>', $breadcrumb);
}
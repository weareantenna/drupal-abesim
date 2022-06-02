<?php
/**
 * @file
 * fo2_permission.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function fo2_permission_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 2,
  );

  // Exported role: Content Administrator.
  $roles['Content Administrator'] = array(
    'name' => 'Content Administrator',
    'weight' => 3,
  );

  // Exported role: User Administrator.
  $roles['User Administrator'] = array(
    'name' => 'User Administrator',
    'weight' => 5,
  );

  return $roles;
}

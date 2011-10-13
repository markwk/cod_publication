<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function cod_publication_user_default_permissions() {
  $permissions = array();

  // Exported permission: create publication content
  $permissions['create publication content'] = array(
    'name' => 'create publication content',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: delete any publication content
  $permissions['delete any publication content'] = array(
    'name' => 'delete any publication content',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: delete own publication content
  $permissions['delete own publication content'] = array(
    'name' => 'delete own publication content',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: edit any publication content
  $permissions['edit any publication content'] = array(
    'name' => 'edit any publication content',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  // Exported permission: edit own publication content
  $permissions['edit own publication content'] = array(
    'name' => 'edit own publication content',
    'roles' => array(
      '0' => 'site administrator',
    ),
  );

  return $permissions;
}

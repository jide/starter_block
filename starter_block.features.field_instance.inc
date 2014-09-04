<?php
/**
 * @file
 * starter_block.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function starter_block_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-block-field_body'
  $field_instances['bean-block-field_body'] = array(
    'bundle' => 'block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'bean',
    'field_name' => 'field_body',
    'label' => 'Body',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'bean-block-title_field'
  $field_instances['bean-block-title_field'] = array(
    'bundle' => 'block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Title of the block.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'title_class' => 'block-title',
          'title_link' => '',
          'title_style' => 'h2',
        ),
        'type' => 'title_linked',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('The Title of the block.');
  t('Title');

  return $field_instances;
}

<?php
/**
 * @file
 * Admin form functions for Islandora Usage Reports.
 */
/**
 * Admin form. Need to make this clearer, with examples  and possibly a select list.
 */
function islandora_usage_reports_admin_form($form, $form_settings) {
  $form['islandora_usage_reports_exclude'] = array(
    '#type' => 'textfield',
    '#title' => t('Placeholder'),
    '#description' => t('Content models for which to exclude the block'),
    '#default_value' => variable_get('islandora_usage_reports_exclude', 'collection'),
  );
  return system_settings_form($form);
}

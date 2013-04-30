<?php
/**
 * @file
 * heston_image.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function heston_image_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Heston Image';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'heston_image';
  $fe_block_boxes->body = '<div id="heston">Heston Blumenthal</div>
';

  $export['heston_image'] = $fe_block_boxes;

  return $export;
}

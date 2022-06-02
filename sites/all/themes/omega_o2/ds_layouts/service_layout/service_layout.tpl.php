<<?php print $layout_wrapper; print $layout_attributes; ?> class="custom-layout <?php print $classes;?> clearfix">

  <?php if (isset($title_suffix['contextual_links'])): ?>
  <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

<div class="service-layout">

  <<?php print $header_left_wrapper ?> class="group-header-left<?php print $header_left_classes; ?>">
    <?php print $header_left; ?>
  </<?php print $header_left_wrapper ?>>

  <<?php print $header_right_wrapper ?> class="group-header-right<?php print $header_right_classes; ?>">
    <?php print $header_right; ?>
  </<?php print $header_right_wrapper ?>>

  <<?php print $middle_wrapper ?> class="group-middle<?php print $middle_classes; ?>">
    <?php print $middle; ?>
  </<?php print $middle_wrapper ?>>

  <<?php print $footer_wrapper ?> class="group-footer<?php print $footer_classes; ?>">
    <?php print $footer; ?>
  </<?php print $footer_wrapper ?>>

</div>

</<?php print $layout_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>

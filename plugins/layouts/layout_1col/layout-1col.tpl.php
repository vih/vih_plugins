<?php
/**
 * @file
 * Template for the 1col layout.
 *
 * Variables:
 * - $css_id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 * panel of the layout. This layout supports the following sections:
 */
?>
<div class="layout-1col clearfix <?php if (!empty($classes)) { print $classes; } ?><?php if (!empty($class)) { print $class; } ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>

  <?php if ($content['header']): ?>
    <div class="panel-pane-region panel-pane-region-header">
      <div class="panel-region-inner">
        <?php print $content['header']; ?>
      </div>
    </div> <!-- /#header -->
  <?php endif; ?>

  <?php if ($content['contentmain1']): ?>
    <div class="panel-pane-region panel-pane-region-contentmain1">
      <div class="container">
        <div class="panel-region-inner">
          <?php print $content['contentmain1']; ?>
        </div>
      </div>
    </div> <!-- /#contentmain1 -->
  <?php endif; ?>

  <?php if ($content['full_width_1']): ?>
    <div class="panel-pane-region panel-pane-region-full-width panel-pane-region-full-width-1">
      <div class="panel-region-inner">
        <?php print $content['full_width_1']; ?>
      </div>
    </div> <!-- /#full-width-1 -->
  <?php endif; ?>

  <?php if ($content['contentmain2']): ?>
    <div class="panel-pane-region panel-pane-region-contentmain2">
      <div class="container">
        <div class="panel-region-inner">
          <?php print $content['contentmain2']; ?>
        </div>
      </div>
    </div> <!-- /#contentmain2 -->
  <?php endif; ?>

  <?php if ($content['full_width_2']): ?>
    <div class="panel-pane-region panel-pane-region-full-width panel-pane-region-full-width-2">
      <div class="panel-region-inner">
        <?php print $content['full_width_2']; ?>
      </div>
    </div> <!-- /#full-width-2-->
  <?php endif; ?>

  <?php if ($content['contentmain3_left'] || $content['contentmain3_right']): ?>
    <div class="panel-pane-region-contentmain3">
      <div class="container">
        <div class="row">
          <div class="col-md-6 panel-pane-region panel-pane-region-contentmain3-left">
            <?php print $content['contentmain3_left']; ?>
          </div>
          <div class="col-md-5 col-md-offset-1 panel-pane-region panel-pane-region-contentmain3-right">
            <?php print $content['contentmain3_right']; ?>
          </div>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <?php if ($content['footer']): ?>
    <div class="panel-pane-region panel-pane-region-footer">
      <div class="panel-region-inner">
        <?php print $content['footer']; ?>
      </div>
    </div> <!-- /#header -->
  <?php endif; ?>

</div> <!-- /.layout-1col -->

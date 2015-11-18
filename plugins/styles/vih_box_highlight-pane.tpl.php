<div class="<?php print (isset($settings['style'])) ? $settings['style'] : 'alternate'; ?>">
  <?php if (!empty($content->title)): ?>
    <h2 class="pane-title"><?php print $content->content['title']['#value']; ?></h2>
  <?php endif ?>
  <div class="pane-content">
    <?php print render($content->content); ?>
  </div>
</div>

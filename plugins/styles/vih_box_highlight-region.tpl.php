<div<?php print (isset($settings['style'])) ? 'class="' . $settings['style'] . '"' : 'class="alternate"'; ?>>
  <?php print render($content->content); ?>
</div>

<?php

/**
 * @file
 * Template for logo and site name.
 */
?>
            <!-- Mobile Menu Button -->
            <button id="mobileMenu" class="fa fa-bars" type="button" data-toggle="collapse" data-target=".navbar-collapse"></button>

            <!-- Brand and toggle get grouped for better mobile display -->
            <div class="navbar-header">
                <a class="navbar-brand scrollTo" href="<?php print $front_page; ?>">
                    <?php if ($logo): ?>
                        <?php print $logo; ?>
                    <?php endif; ?>
                    <span class=""><?php print $site_name; ?></span>
                </a>
            </div>

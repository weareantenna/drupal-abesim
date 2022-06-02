<div<?php print $attributes; ?>>

    <header class="l-header" role="navigation">
        <div class="container">
            <a class="trigger" href="#"></a>
            <div class="l-branding">
                <?php if ($logo): ?>
                    <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
                <?php endif; ?>

                <?php print render($page['branding']); ?>

            </div>

            <nav class="off-canvas" >
                <?php print render($page['header']); ?>
                <?php print render($page['navigation']); ?>

            </nav>


            <div class="l-breads">
                <?php print render($page['breadcrumb']); ?>
            </div>
        </div>
    </header>

    <div class="l-highlighted">
        <?php print render($page['highlighted']); ?>
    </div>

    <?php if ($title): ?>
        <?php print render($title_prefix); ?>
        <?php print render($page['title']); ?>
        <?php print render($title_suffix); ?>
    <?php endif; ?>

    <div class="l-main">
        <div class="l-content" role="main">

            <a id="main-content"></a>
            <?php print $messages; ?>
            <?php print render($tabs); ?>
            <?php print render($page['help']); ?>
            <?php if ($action_links): ?>
                <ul class="action-links"><?php print render($action_links); ?></ul>
            <?php endif; ?>
            <?php print render($page['content']); ?>
            <?php print $feed_icons; ?>
        </div>

        <?php print render($page['sidebar_first']); ?>
        <?php print render($page['sidebar_second']); ?>
    </div>

    <div class="l-lowlighted">
        <div class="container">
            <?php print render($page['lowlighted']); ?>
        </div>
    </div>

    <footer class="l-doormat" role="sitemap">
        <div class="container">
            <?php print render($page['doormat_left']); ?>
            <?php print render($page['doormat_middle']); ?>
            <?php print render($page['doormat_right']); ?>
        </div>
    </footer>

    <footer class="l-footer" role="contentinfo">
        <?php print render($page['footer']); ?>
        <?php print render($page['footer_copyright']); ?>
    </footer>
    <?php print render($page['cookie_law']); ?>
</div>
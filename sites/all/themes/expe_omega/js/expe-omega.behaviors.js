(function ($) {
  Drupal.behaviors.general = {
    attach: function (context, settings) {

      /* megadropdown */
      $('.off-canvas li.menu-mlid-468').addClass('megadropdown');

      /* Overwrite Drupal autocomplete JS */
      /*
      Drupal.jsAC.prototype.setStatus = function (status) {
        switch (status) {
          case 'begin':
            $(this.input).parent().addClass('throbbing');
            $(this.ariaLive).html(Drupal.t('Searching for matches...'));
            break;
          case 'cancel':
          case 'error':
          case 'found':
            $(this.input).parent().removeClass('throbbing');
            break;
        }
      }; */

      /* fix for top nav dropdown on touch screen devices */
      if ($('html').hasClass('touch')) {
        // selector for dropdown anchors in topnav
        var topnavdropdownparent = $('.l-region--navigation').find('li.expanded').children('a');

        // if you click any anchor in the topnav that has a dropdown...
        topnavdropdownparent.click(function(event) {
          // remove any pre-existing mobile-click classes in case you've been tapping back and forth, but don't do this for what you just clicked
          topnavdropdownparent.not($(this)).removeClass('mobile-click');
          // if the clicked anchor doesn't have the mobile-click class aka if this is the first time you click this item: don't use the url
          if(!$(this).hasClass('mobile-click')){
            event.preventDefault();
          }
          // add the class "mobile-click" to this anchor afterwards so the second click actually goes to the URL
          $(this).addClass('mobile-click');
        });
      }

    }
  };

})(jQuery);

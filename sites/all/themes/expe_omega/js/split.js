(function ($) {
  Drupal.behaviors.split = {
    attach: function (context, settings) {
      
      // SOLUTIONS & SERVICES
      $(document).mousemove(function(e){

        var offset = $('.visual').offset(); 
        var width = $('.visual').width(); 
        var x = (e.pageX - offset.left)/width;

        if (x > 0.5){
          $('.services').addClass('shine');
          $('.solutions').removeClass('shine');
        }
        else{
          $('.solutions').addClass('shine');
          $('.services').removeClass('shine');
        }
        
      });

      // SPLIT SOLUTIONS      
      $('.view-solutions').addClass('js-split');
      $('.view-solutions ul').each(function(i){
          var colsize = Math.round($(this).find("li").size() / 2);
          $(this).find("li").each(function(i) {
          if (i>=colsize){
            $(this).addClass('splitcol_right');
          }
        }
        )
          $(this).find('.splitcol_right').insertAfter(this).wrapAll("<ul class='listright'></ul>");
        }
      )

    }
  };

})(jQuery);

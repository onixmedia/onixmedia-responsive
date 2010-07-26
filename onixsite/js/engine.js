

$(document).ready(function(){


$('#video-div').hide();
$('#video-margin').hide();

    $(".scrollable").scrollable({
        
        circular:true,
        
        keyboard:false
        
        });
    
    $('.slider-content img').click(  
        function(){
            
            var videoid = $(this).attr("rel");
            var video = '<div id="video-wrapper"><object><embed src="http://vimeo.com/moogaloop.swf?clip_id='+videoid+'&amp;server=vimeo.com&amp;show_title=1&amp;show_byline=1&amp;show_portrait=0&amp;color=&amp;fullscreen=0" type="application/x-shockwave-flash" allowfullscreen="false" allowscriptaccess="always" width="400" height="225"></embed></object></div>';
            
            if ($("#video-wrapper").length > 0){
                $('#video-wrapper').remove();
            }
            
            
            $('#video-margin').show();
            $('#video-div').show('slow');
            $('#video-div').append(video);
            
        }
    );

    $('.close').click(  
        function(){
            
            $('#video-wrapper').remove();
            $('#video-div').hide('slow');
            $('#video-margin').hide('slow');
            
            
        }
    );

});


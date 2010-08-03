

$(document).ready(function(){

var isiPad = navigator.userAgent.match(/iPad/i) != null;
var isiPhone = navigator.userAgent.match(/iPhone/i) != null;

if(isiPad || isiPhone){
    $('#header-inner').css('width', '960px');
    $('#img-logo').css('marginLeft', '3px');
    $('#head-menu').css('width', '550px');
}



    $(".scrollable").scrollable({
        
        circular:true,
        
        keyboard:false
        
        });
    
   
  $("a.sliderimg").fancybox({
		'transitionIn'	:	'elastic',
		'transitionOut'	:	'elastic',
		'speedIn'		:	600, 
		'speedOut'		:	200,
                'overlayOpacity'    :   0.7,
                'overlayColor' :    '#000'
	});



});


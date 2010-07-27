<? echo '<?xml version="1.0" encoding="UTF-8"?>'; ?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
    <title>Onix Media</title>
    <?
    $lang = $_GET['lang'];
    
    if($lang=="es"){
        echo '<link type="text/css" rel="stylesheet" href="./css/style_es.css" />';
    }else{
        echo '<link type="text/css" rel="stylesheet" href="./css/style.css" />';
    }
    ?>
     <script language="JavaScript" src="js/jquery-1.4.2.min.js"></script>
     <script language="JavaScript" src="js/jquery.tools.min.js"></script>
     <script language="JavaScript" src="js/engine.js"></script>
</head>

<body>
    <div id="container">
        <div id="header">
            <div id="header-inner">
                <div id="logo">
                    <a href="index.php<? if($lang=="es"){echo '?lang=es';} ?>" id="img-logo">Onix Media, Frameworks for Digital Content</a>
                </div>
                <div id="head-menu">
                    <a id="langotggle_no" href="index.php<? if($lang!="es"){echo '?lang=es';} ?>"><? if($lang!="es"){echo 'Espa&ntilde;ol';}else{echo 'English';} ?></a>
                    <a id="contactbtn_no" href="contact.php<? if($lang=="es"){echo '?lang=es';} ?>">Contact<? if($lang=="es"){echo 'o';} ?></a>
                    
                </div>
            </div>
        </div>
        <div id="main">
            <div id="main-inner">
                <h1 id="main-head">Onix News, <? if($lang!="es"){echo 'Your newspaper on the ipad, in a tap.';}else{echo 'Su peri&oacute;dico en el iPad, en un tap.';} ?></h1>
                <div id="main-caption"><? if($lang=="es"){echo 'Publique en el iPad de forma sencilla y r&aacute;pida. Deje que sus lectores disfruten las noticias, galer&iacute;as de im&aacute;genes y multimedia en tiempo real, mediante una aplicaci&oacute;n que se actualiza con su mismo servidor web. Presente su contenido con una interfaz propia, un dise&ntilde;o vers&aacute;til y acceso inmediato a redes sociales y &uacute;tiles “widgets” de informaci&oacute;n.
Todo esto acompañado de espacios publicitarios en multimedia.';}else{ echo 'Publish to the iPad with ease and speed. Let your readers enjoy realtime news, photo galleries and multimedia on an application that sources from your website server. Empower your content with a fully-branded user interface, a versatile design, news widgets and sharing tools. 
More importantly: monetize your audience with integrated advertising!'; } ?></div>
                <div id="body-content">
                    <div id="col-right">
                        <h3 id="main-features"><? if($lang=="es"){echo 'Caracter&iacute;sticas';}else{ echo 'Main Features'; } ?></h3>
                        <div class="rows first">
                            <div class="rights">
                                <div id="SN" class="thumbs" style="background: url(images/social-networks.png) center left no-repeat; "><? if($lang=="es"){echo 'Redes Sociales';}else{ echo 'Social Networks'; } ?></div>
                            </div>
                            <div class="lefts">
                                 <div id="news" class="thumbs" style="background: url(images/news.png) center left no-repeat; "><? if($lang=="es"){echo 'Noticias';}else{ echo 'News'; } ?></div>
                            </div>
                            
                        </div>
                        <div class="rows">
                            <div class="rights">
                                 <div id="comments" class="thumbs" style="background: url(images/comments.png) center left no-repeat;"><? if($lang=="es"){echo 'Comentar';}else{ echo 'Comments'; } ?></div>
                            </div>
                            <div class="lefts">
                                 <div id="editorials" class="thumbs" style="background: url(images/editorials.png) center left no-repeat;"><? if($lang=="es"){echo 'Editoriales';}else{ echo 'Editorials'; } ?></div>
                            </div>
                            
                        </div>
                        <div class="rows">
                            <div class="rights">
                                 <div id="share" class="thumbs" style="background: url(images/share.png) center left no-repeat;"><? if($lang=="es"){echo 'Compartir';}else{ echo 'Share'; } ?></div>
                            </div>
                            <div class="lefts">
                                 <div id="videogal" class="thumbs" style="background: url(images/videos.png) center left no-repeat;"><? if($lang=="es"){echo 'Galer&iacute;a de Video';}else{ echo 'Video Gallery'; } ?></div>
                            </div>
                        </div>
                        <div class="rows last">
                            <div class="rights">
                                 <div id="ADV" class="thumbs" style="background: url(images/advertising.png) center left no-repeat;"><? if($lang=="es"){echo 'Publicidad';}else{ echo 'Advertising'; } ?></div>
                            </div>
                            <div class="lefts">
                                 <div id="photogal" class="thumbs" style="background: url(images/photos.png) center left no-repeat;"><? if($lang=="es"){echo 'Galer&iacute;as de Fotos';}else{ echo 'Photo Galleries'; } ?></div>
                            </div>
                        </div>
                        
                        <div id="minifoot" title="<? if($lang=="es"){echo 'Perm&iacute;tanos llevar su peri&oacute;dico al iPad';}else{ echo 'Let us help you take your publication to the iPad'; } ?>">
                            <a href="contact.php<? if($lang=="es"){echo '?lang=es';} ?>" id="contact"><? if($lang=="es"){echo 'Contacto';}else{echo 'Contact us';} ?></a>
                        </div>
                        
                    </div>
                    <div id="col-left">&nbsp;</div>
                    
                </div>
            </div>
            <div id="slider" class="scrollable">

                   <div class="items">    
                            <div class="slider-content item-8" width="415" height="104"><img src="images/carr_thumb.png" rel="13132694" class="videopopup" /></div>
                            <div class="slider-content item-1" width="415" height="104"><img src="images/carr_thumb.png" rel="13132438" class="videopopup"/></div>
                            <div class="slider-content item-2" width="415" height="104"><img src="images/carr_thumb.png" /></div>
                            <div class="slider-content item-3" width="415" height="104"><img src="images/carr_thumb.png" /></div>
                            <div class="slider-content item-4" width="415" height="104"><img src="images/carr_thumb.png" /></div>
                            <div class="slider-content item-5" width="415" height="104"><img src="images/carr_thumb.png" /></div>
                            <div class="slider-content item-6" width="415" height="104"><img src="images/carr_thumb.png" /></div>
                            <div class="slider-content item-7" width="415" height="104"><img src="images/carr_thumb.png" /></div>
                   </div>   
                    
            </div>
            <div class="prev"></div><div class="next"></div>
            
            
            <div id="blankspace">
                <div id="sampleapp">
                    <a href="http://itunes.apple.com/us/app/vanguardia/id377253674?mt=" id="applogo" ><? if($lang=="es"){echo 'Descargue y pruebe...';}else{ echo 'Download sample App'; } ?></a>
                    <div id="sampleapptext">
                        <div class="blankhead"><a href="http://itunes.apple.com/us/app/vanguardia/id377253674?mt="><? if($lang=="es"){echo 'Descargue y pruebe...';}else{ echo 'Download sample App'; } ?></a></div>
                        <div class="blanktext"><? if($lang=="es"){echo 'Pruebe un ejemplo de OnixNews: Descargue en el App<br /> Store la aplicaci&oacute;n del peri&oacute;dico <strong>Vanguardia</strong>';}else{ echo 'Check out a live OnixNews App by downloading<br /><strong>Vanguardia</strong> from the App Store.'; } ?></div>
                    </div>
                </div>
                
                <div id="sociallinks">
                    <div class="blankhead"><? if($lang=="es"){echo 'Siga nuestras noticias:';}else{ echo 'Follow us for news &amp; updates:'; } ?></div>
                    <div>
                        <a href="http://twitter.com/OnixMedia" id="twitter">Onix App on Twitter</a>
                        <a href="#" id="fb">Onix App on Facebook</a>
                    </div>
                </div>
                    
                
            </div>
                
                
            <div id="footer">
                <a href="http://www.onixmedia.net/" id="onixlink" class="footlinks firstlink">onixmedia.net</a>
                <a href="index.php<? if($lang=="es"){echo '?lang=es';} ?>" id="homelink" class="footlinks">Home</a>
                <a href="contact.php<? if($lang=="es"){echo '?lang=es';} ?>" id="contactlink" class="footlinks">Contact</a>
                <a href="index.php<? if($lang!="es"){echo '?lang=es';} ?>" id="langlink" class="footlinks">Espa&ntilde;ol</a>
               <div id="links"> </div>
            </div>
        </div>
    </div>
    <div id="closure"><? if($lang=="es"){echo '&copy;Copyright 2010 Derechos Reservados C&oacute;digo Onix, S.A. de C.V.<br />OnixMedia is a registred trademark of Codigo Onix S.A. de C.V., iPad&reg; and iPhone are registered trademarks of Apple Computer, Inc. USA';}else{ echo '&copy;Copyright 2010 C&oacute;digo Onix, S.A. de C.V.<br /> OnixMedia is a registred trademark of Codigo Onix S.A. de C.V., iPad&reg; and iPhone are registered trademarks of Apple Computer, Inc. USA'; } ?></div>
    
    <div id="video-margin">
        <div id="video-div"><div class="close cbutton">close</div></div>
        <div class="close"></div>
    </div>
</body>
</html>

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
    <script language="JavaScript" src="js/engine.js"></script>
</head>
<body class="contact">
        <div id="container">
        <div id="header">
            <div id="header-inner">
                <div id="logo">
                    <a href="index.php<? if($lang=="es"){echo '?lang=es';} ?>" id="img-logo">Onix Media, Frameworks for Digital Content</a>
                </div>
                <div id="head-menu">
                    <a id="langotggle_no" class="addhover" href="index.php<? if($lang!="es"){echo '?lang=es';} ?>">Espa&ntilde;ol</a>
                    <a id="contactbtn_no" class="addhover active" href="contact.php<? if($lang=="es"){echo '?lang=es';} ?>">Contact<? if($lang=="es"){echo 'o';} ?></a>
                </div>
            </div>
        </div>
        <div id="main">
            <div id="main-inner">
                
                 <h1 id="contactTitle">Contact Us</h1>
                 <div id="phones">
                    <div id="phonesright">
                        <p>+1 917 546-6691 </p>
                        <p>+52 818 123-2370</p>
                    </div>
                    <div id="phonesleft">
                        <p><? if($lang=="es"){echo 'OnixMedia EUA:';}else{ echo 'OnixMedia USA:'; } ?></p>
                        <p><? if($lang=="es"){echo 'OnixMedia Latinoam&eacute;rica:';}else{ echo 'OnixMedia Latin America:'; } ?></p>
                    </div>
                    
                 </div>
                 
                 <form name="sendmail" method="post" action="thanks.php<? if($lang=="es"){echo '?lang=es';} ?>">
                 
                 <div id="inputsWrapper">
                    
                    <div id="inputLables">
                        <div class="labels"><? if($lang=="es"){echo 'Nombre';}else{ echo 'First Name'; } ?>:</div>
                        <div class="labelssec"><? if($lang=="es"){echo 'Apellido';}else{ echo 'Last Name'; } ?>:</div>
                        <div class="labelsthir"><? if($lang=="es"){echo 'Empresa';}else{ echo 'Company'; } ?>:</div>
                        <div class="labelsfor"><? if($lang=="es"){echo 'E-mail';}else{ echo 'E-mail'; } ?>:</div>
                        <div class="labelsfi"><? if($lang=="es"){echo 'Tel&eacute;fono';}else{ echo 'Phone #'; } ?>:</div>
                        <div class="labelslast"><? if($lang=="es"){echo 'Mensaje';}else{ echo 'Message'; } ?>:</div>
                    </div>
                    
                    <div id="inputBoxes">
                       <input type="text" name="first_name" class="inputs" />
                       <input type="text" name="last_name" class="inputs" />
                       <input type="text" name="company" class="inputs" />
                       <input type="text" name="email" class="inputs" />
                       <input type="text" name="phone" class="inputs" />
                       <textarea id="contactTxtArea" name="message"></textarea>
                       <input type="submit" value="" id="submitbtn" />
                       
                    </div>
                    
                    
                    <div id="checkboxes">
                        <p class="checkboxHead"><? if($lang=="es"){echo 'Inter&eacute;s en:';}else{ echo 'Interested in:'; } ?></p>
                        <input type="checkbox" name="interest[]" value="newspaper" /> <? if($lang=="es"){echo 'Aplicaci&oacute;n para Peri&oacute;dico';}else{ echo 'Newspaper App'; } ?><br />
                        <input type="checkbox" name="interest[]" value="magazine" /> <? if($lang=="es"){echo 'Aplicaci&oacute;n para Revista';}else{ echo 'Magazine App'; } ?><br />
                        <input type="checkbox" name="interest[]" value="other" /> <? if($lang=="es"){echo 'Otro...';}else{ echo 'Other...'; } ?>
                        <p class="checkboxHead second"><? if($lang=="es"){echo 'Favor de contactarme via:';}else{ echo 'Please contact me via:'; } ?></p>
                        <input type="checkbox" name="contactme[]" value="email" /> <? if($lang=="es"){echo 'E-mail';}else{ echo 'Email'; } ?><br />
                        <input type="checkbox" name="contactme[]" value="phone" /> <? if($lang=="es"){echo 'Tel&eacute;fono';}else{ echo 'Phone call'; } ?>
                    </div>
                    
                 </div>
                 </form>
            </div>
            <div id="footer">
                <a href="http://www.onixmedia.net/" id="onixlink" class="footlinks firstlink">onixmedia.net</a>
                <a href="index.php<? if($lang=="es"){echo '?lang=es';} ?>" id="homelink" class="footlinks">Home</a>
                <a href="contact.php<? if($lang=="es"){echo '?lang=es';} ?>" id="contactlink" class="footlinks">Contact</a>
            <div id="links"> </div>
        </div>
        </div>
        
      </div>
    <div id="closure"><? if($lang=="es"){echo '&copy;Copyright 2010 Derechos Reservados C&oacute;digo Onix, S.A. de C.V.<br />OnixMedia is a registred trademark of Codigo Onix S.A. de C.V., iPad&reg; and iPhone&reg; are registered trademarks of Apple Computer, Inc. USA';}else{ echo '&copy;Copyright 2010 C&oacute;digo Onix, S.A. de C.V.<br /> OnixMedia is a registred trademark of Codigo Onix S.A. de C.V., iPad&reg; and iPhone are registered trademarks of Apple Computer, Inc. USA'; } ?></div>
    

      
</body>
</html>

 
<?php
if(isset($_POST['activity'])){
  session_start();

  //if(session_id()!=''){
  $_SESSION["activity"]=$_SESSION["activity"] . " | " .$_POST['activity'];

//}
}
 ?>

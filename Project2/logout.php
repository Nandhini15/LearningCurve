<?php
include('royaldata.php');
session_start();
var_dump($_SESSION["activity"]);
var_dump(isset($_SESSION["username"]));
if(isset($_SESSION["username"]))
{
  RoyalData::update();
  session_destroy();
  echo "<script>location.href='login.php'</script>";
}

echo "<script>location.href='login.php'</script>";
?>

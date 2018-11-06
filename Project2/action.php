<?php
include('royaldata.php');
session_start();
$sessionId=session_id();
$_SESSION['activity']="";
$connect = mysqli_connect('localhost', 'root', '', 'royal-le-page');
if(isset($_POST["username"]))
{
  $query = "
   SELECT * FROM admin_login
   WHERE admin_username ='".$_POST["username"]."'
   AND admin_password ='".md5($_POST["password"])."'
  ";
  $result = mysqli_query($connect, $query);
  if(mysqli_num_rows($result) > 0)
  {
    $row = mysqli_fetch_array($result);
    $fetchVal = $row['is_admin'];
    if($fetchVal == 1){
    $_SESSION["username"] = $_POST["username"];
    echo "<script>location.href = 'interface.php'</script>";
    }
    else if($fetchVal == 0){
      $_SESSION["username"] = $_POST["username"];
      $_SESSION['started'] = (!isset($_SESSION['started']) ? time() : $_SESSION['started']);
      $_SESSION['sessionId']=$sessionId;
      RoyalData::connection();
      RoyalData::insert();
      echo "<script>location.href = 'landing.php'</script>";
    }
  }else{
    $message = "wrong attempt";
echo "<script type='text/javascript'>alert('$message');</script>";
  }
}
?>

<?php
include('credentials-data.php');
session_start();
if(!isset($_SESSION["username"])){
    echo "<script>location.href='login.php'</script>";
}
//$feilds = array('Firstname', 'Lastname', 'email', 'phoneno', 'message');

$Firstname = "";
$Lastname = "";
$email = "";
$phoneno = "";
$message = "";
$id = 0;
$edit_state = false;
//$db = mysqli_connect('localhost', 'root', '', 'unbeleadsable');
Database::connected();
if(isset($_POST['save'])){
$Firstname = $_POST['Firstname'];
$Lastname = $_POST['Lastname'];
$email = $_POST['email'];
$phoneno = $_POST['phoneno'];
$message = $_POST['message'];
//$query = "INSERT INTO testformevaluation (Firstname, Lastname, email, phoneno, message) VALUES ('$Firstname', '$Lastname', '$email', '$phoneno', '$message')";
//mysqli_query($db, $query);
//$feilds = array("Firstname" => "$Firstname", "Lastname" => "$Lastname", "email" => "$email", "phoneno" => "$phoneno", "message" => "$message");
$feilds = array('$Firstname', '$Lastname', '$email', '$phoneno', '$message');
//foreach ($feilds as $key => $value) {
  //echo "Key =" . $key .", Value=" . $value;
  //echo "<br>";

//}
$table_name = "testformevaluation";
Database::insertion($table_name, $feilds);
$_SESSION['msg'] = "credentials saved";
header('location: credentials.php');
}
if(isset($_POST['update'])){
$Firstname = mysqli_real_escape_string($db, $_POST['Firstname']);
$Lastname = mysqli_real_escape_string($db, $_POST['Lastname']);
$email = mysqli_real_escape_string($db, $_POST['email']);
$phoneno = mysqli_real_escape_string($db, $_POST['phoneno']);
$message = mysqli_real_escape_string($db, $_POST['message']);
$id = mysqli_real_escape_string($db, $_POST['id']);
$table_name = "testformevaluation";
//mysqli_query($db, "UPDATE testformevaluation SET Firstname='$Firstname', Lastname='$Lastname', email='$email', phoneno='$phoneno', message='$message' WHERE id=$id");
Database::updation($table_name, $id);
$_SESSION['msg'] = "credentials updated";
header('location: credentials.php');
}
//delete records
if(isset($_GET['del'])){
$id = $_GET['del'];
//mysqli_query($db, "DELETE FROM testformevaluation WHERE id=$id");
$table_name = "testformevaluation";
Database::deletion($id, $table_name);
$_SESSION['msg'] = "credentials deleted";
}
$table_name = "testformevaluation";
//retrieve records from Database
$rsl = Database::selection($table_name);

?>

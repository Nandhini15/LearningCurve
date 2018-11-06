<?php
session_start();
$Title = "";
$Description = "";
$id = 0;
$edit_state = false;
$db = mysqli_connect('localhost', 'root', '', 'royal-le-page');
if(isset($_POST['save']))
{
$Title = $_POST['Title'];
$Description = $_POST['Description'];
$query = "INSERT INTO features (Title, Description) VALUES ('$Title', '$Description')";
mysqli_query($db, $query);
$_SESSION['msg'] = "feature saved";
header('location: fetch.php');
}
if(isset($_POST['update']))
{
$Title = mysqli_real_escape_string($db, $_POST['Title']);
$Description = mysqli_real_escape_string($db, $_POST['Description']);
$id = mysqli_real_escape_string($db, $_POST['id']);
mysqli_query($db, "UPDATE features SET Title='$Title', Description='$Description' WHERE id=$id");
$_SESSION['msg'] = "feature updated";
header('location: fetch.php');
}
//delete records
if(isset($_GET['del'])){
$id = $_GET['del'];
mysqli_query($db, "DELETE FROM features WHERE id=$id");
$_SESSION['msg'] = "feature deleted";
header('location: fetch.php');
}
//retrieve records from Database
$results = mysqli_query($db, "SELECT * FROM features");
?>

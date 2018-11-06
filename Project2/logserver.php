<?php
include('royaldata.php');
//session_start();
if(!isset($_SESSION["username"])){
    echo "<script>location.href='login.php'</script>";
}

if(isset($_GET['del'])){
$activity_id = $_GET['del'];
//mysqli_query($db, "DELETE FROM testformevaluation WHERE id=$id");
$table_name = "user_activity";
RoyalData::deletion($activity_id, $table_name);

}
$table_name = "user_activity";
//retrieve records from Database
$rsl = RoyalData::select($table_name);

?>

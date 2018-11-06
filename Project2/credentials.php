
  <?php
   include('credentials-server.php');

   if(isset($_GET['edit']))
   {
     $id = $_GET['edit'];
     $edit_state = true;
$table_name = "testformevaluation";
  //$rec = mysqli_query($db, "SELECT * FROM testformevaluation WHERE id=$id");
  //   $record = mysqli_fetch_array($rec);
$records = Database::edit($id, $table_name);

     $Firstname = $records['Firstname'];
     $Lastname = $records['Lastname'];
     $email = $records['email'];
     $phoneno = $records['phoneno'];
     $message = $records['message'];
     $id = $records['id'];
   }
  ?>
  <!DOCTYPE html>
  <html>
  <head>
  <title> Database records: </title>
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u" crossorigin="anonymous">
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/bootstrap-slider/10.0.2/css/bootstrap-slider.min.css" />
  <!-- Latest compiled and minified JavaScript -->
  <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js" integrity="sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa" crossorigin="anonymous"></script>
  <script src="https://cdnjs.cloudflare.com/ajax/libs/bootstrap-slider/10.0.2/bootstrap-slider.min.js"></script>
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.3.1/jquery.min.js"></script>
  <link href="https://fonts.googleapis.com/icon?family=Material+Icons" rel="stylesheet">
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.min.css">
  <link rel="stylesheet" type="text/css" href="../assets/style-fetch.css">
</head>
<body>
  <?php if (isset($_SESSION['msg'])): ?>
    <div class="msg">
      <?php
        echo $_SESSION['msg'];
        unset($_SESSION['msg']);
       ?>
    </div>
  <?php endif ?>
  <table>
    <thead>
      <tr>
        <th>Firstname</th>
        <th>Lastname</th>
        <th>email</th>
        <th>phoneno</th>
        <th>message</th>
        <th colspan="2">Action</th>
      </tr>
    </thead>
    <tbody>
      <?php foreach ($rsl as $row) {?>
          <tr>
           <td><?php echo $row['Firstname']; ?></td>
           <td><?php echo $row['Lastname']; ?></td>
           <td><?php echo $row['email']; ?></td>
           <td><?php echo $row['phoneno']; ?></td>
           <td><?php echo $row['message']; ?></td>
           <td>
             <a class="edit_btn" href="credentials.php?edit=<?php echo $row['id']; ?>">Edit</a>
           </td>
           <td>
             <a class="del_btn" href="credentials-server.php?del=<?php echo $row['id']; ?>">Delete</a>
           </td>
           </tr>
    <?php } ?>
  </tbody>
  </table>
  <form role="form" id="form-credentials" method="post" action="credentials-server.php">
    <input type="hidden" name="id" value="<?php echo $id; ?>">
    <div class="form-group">
      <label>Firstname</label>
      <input class="form-control" name="Firstname" type="varchar(15)" value="<?php echo $Firstname; ?>" >
    </div>
    <div class="form-group">
      <label>Lastname</label>
      <input class="form-control" name="Lastname" type="varchar(15)" value="<?php echo $Lastname; ?>" >
    </div>
    <div class="form-group">
      <label>email</label>
      <input class="form-control" name="email" type="varchar(20)" value="<?php echo $email; ?>" >
    </div>
    <div class="form-group">
      <label>phoneno</label>
      <input class="form-control" name="phoneno" type="varchar(15)" value="<?php echo $phoneno; ?>" >
    </div>
    <div class="form-group">
      <label>message</label>
      <input class="form-control" name="message" type="text" value="<?php echo $message; ?>" >
    </div>
    <div class="form-group">
      <?php if ($edit_state == false): ?>
       <button type="submit" name="save" class="btn">Save</button>
      <?php else: ?>
       <button type="submit" name="update" class="btn">Update</button>
      <?php endif ?>
    </div>
  </form>
  
 </body>
 </html>

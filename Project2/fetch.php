  <?php
   include('server.php');
   session_start();
   if(isset($_GET['edit']))
   {
     $id = $_GET['edit'];
     $edit_state = true;
     $rec = mysqli_query($db, "SELECT * FROM features WHERE id=$id");
     $record = mysqli_fetch_array($rec);
     $Title = $record['Title'];
     $Description = $record['Description'];
     $id = $record['id'];
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
        <th>Title</th>
        <th>Description</th>
        <th colspan="2">Action</th>
      </tr>
    </thead>
    <tbody>
      <?php while ($row = mysqli_fetch_array($results)){ ?>
          <tr>
           <td><?php echo $row['Title']; ?></td>
           <td><?php echo $row['Description']; ?></td>
           <td>
             <a class="edit_btn" href="fetch.php?edit=<?php echo $row['id']; ?>">Edit</a>
           </td>
           <td>
             <a class="del_btn" href="server.php?del=<?php echo $row['id']; ?>">Delete</a>
           </td>
           </tr>
    <?php } ?>
  </tbody>
  </table>
  <form role="form" id="form-feature" method="post" action="server.php">
    <input type="hidden" name="id" value="<?php echo $id; ?>">
    <div class="form-group">
      <label>Title</label>
      <input class="form-control" name="Title" type="text" value="<?php echo $Title; ?>" >
    </div>
    <div class="form-group" id="textalign">
      <label>Description</label>
        <input class="form-control" name="Description" type="text" value="<?php echo $Description; ?>">
    </div>
    <div class="form-group">
      <?php if ($edit_state == false): ?>
       <button type="submit" name="save" class="btn">Save</button>
      <?php else: ?>
       <button type="submit" name="update" class="btn">Update</button>
      <?php endif ?>
    </div>
  </form>

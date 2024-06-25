<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>BANKER LOGIN</title>
    <link rel="stylesheet" href="CSS/s1.css">
</head>
<body>
    <?php
    $servername = "localhost";
    $username = "root";
    $password = "";
    $con = mysqli_connect($servername, $username, $password, 'Bhumit');
    ?>

    <div id="full">
        <div id="inner_full">
            <div id="header"><h2>WELCOME TO BANKER'S APP</h2></div>
            <div id="body">
                <br><br><br><br><br>
    <table class="table" border="2 solid">
  <thead>
    <tr>
      <th scope="col">ID</th>
      <th scope="col">Name</th>
      <th scope="col">A/c Number</th>
      <th scope="col">Avl. Balance</th>
    </tr>
  </thead>
  <tbody>
  <?php
        $view = "select * from bms";
        $select = mysqli_query($con,$view);
        while($row = mysqli_fetch_assoc($select))
            {
                // echo $row['Name'];
                // echo $row['AcNum'];
                // echo $row['Balance'];
                // echo "<br>";

        ?>
    <tr>
      <th scope="row"><?php echo $row['ID'];?></th>
      <td><?php echo $row['Name'];?></td>
      <td><?php echo $row['AcNum'];?></td>
      <td><?php echo $row['Balance'];?></td>
    </tr>
    

    <?php  } ?>
   </tbody>
</table>
    <tr>
        <td><button><a href="Banker.php">Go Back</a></button></td>
    </tr>
            </div>
            <div id="footer"><h4 align="center">Copyright@MyProjectBS</h4></div>
        </div>
    </div>
</body>
</html>
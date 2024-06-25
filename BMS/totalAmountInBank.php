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
      <th scope="col">Total Avl. Balance</th>
    </tr>
  </thead>
  <tbody>
    <?php
    $sql = "SELECT SUM(Balance) AS total FROM bms";
    $result = mysqli_query($con,$sql);
    $row = mysqli_fetch_assoc($result);
    $total = $row['total'];
    ?>
    <tr>
    <td><?php echo $total;?></td>
    </tr>
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
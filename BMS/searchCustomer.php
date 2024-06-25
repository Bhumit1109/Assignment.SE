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
                <form action="" method="post">
                <br><br><br><br><br>
                <table align="center">
                    <tr>
                       <td>Customer Name: <input type="text" name="cname" required></td>
                    </tr>
                    <tr>
                        <td><button type="submit" name="Search">Search</button></td>
                    </tr>
                    <?php if(isset($_POST['Search']))
                    {
                    $cname = $_POST['cname'];
                    $sql = "Select * from bms where Name like '$cname'";
                    $result = mysqli_query($con,$sql);
                    $row = mysqli_fetch_assoc($result);
                    print_r($row);
                    }
                 ?> 
                    <tr>
                        <td><button><a href="Banker.php">Go Back</a></button></td>
                    </tr>
                </table>
                </form>
            </div>
            <div id="footer"><h4 align="center">Copyright@MyProjectBS</h4></div>
        </div>
    </div>
</body>
</html>
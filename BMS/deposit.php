<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>CUSTOMER LOGIN</title>
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
            <div id="header"><h2>WELCOME TO CUSTOMER'S APP</h2></div>
            <div id="body">
                <form action="" method="post">
                <br><br><br><br><br>
                <table align="center">
                    <tr>
                       <td>Customer Name: <input type="text" name="cname" required></td>
                    </tr>
                       <td>Account Number: <input type="text" name="acnum" required></td>
                    </tr>
                    <tr>
                       <td>Deposit Amount: <input type="text" name="bal" required></td>
                    </tr>
                    <tr>
                        <td><button type="submit" name="Add">Deposit</button></td>
                    </tr>
                    <tr>
                        <td><button><a href="Banker.php">Go Back</a></button></td>
                    </tr>
                </table>
                <?php
                if(isset($_POST['Deposit']))
                {
                    $cname = $_POST['cname'];
                    $acnum = $_POST['acnum'];
                    $bal = $_POST['bal'];
                    $sql = "insert into bms(Name, AcNum, Balance) values ('$cname', '$acnum', '$bal')";
                    $insert = mysqli_query($con,$sql);
                }
                ?>
                </form>
            </div>
            <div id="footer"><h4 align="center">Copyright@MyProjectBS</h4></div>
        </div>
    </div>
</body>
</html>
<?php
header('content-type: application/json');
header('Access-Control-Allow-Origin: *');

include "config.php";

$sql = "SELECT * FROM user";
$run = mysqli_query($conn,$sql);

if(mysqli_num_rows($run) > 0)
{
    $output = mysqli_fetch_all($run,MYSQLI_ASSOC);
    echo json_encode($output);
}

?>
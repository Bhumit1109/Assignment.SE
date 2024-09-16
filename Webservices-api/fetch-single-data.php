<?php
header('content-type: application/json');
header('Access-Control-Allow-Origin: *');

$data = json_decode(file_get_contents("php://input"),true);
$user_Id = $data['uid'];

include "config.php";

$sql = "SELECT * FROM user WHERE id='{$user_Id}'";
$run = mysqli_query($conn,$sql);

if(mysqli_num_rows($run) > 0)
{
    $output = mysqli_fetch_all($run,MYSQLI_ASSOC);
    echo json_encode($output);
}

?>
<?php
header('content-type: application/json');

$data = json_decode(file_get_contents("php://input"),true);

$name = $data['sname'];
$age = $data['sage'];
$city = $data['scity'];

include "config.php";

$sql = "INSERT INTO user(user_name,age,city) VALUES('{$name}','{$age}','{$city}')";
$run = mysqli_query($conn,$sql);

if($run){
    echo json_encode(array('message'=>'user record inserted.','status'=>true));
}

?>
<!-- Write program to remove duplicate values from array. -->

<?php

$array = array(1, 2, 2, 3, 4, 4, 5, 6, 6, 7, 8, 8, 9);

// Use array_unique() function to remove duplicates
$uniqueArray = array_unique($array);

print_r($uniqueArray);

?>
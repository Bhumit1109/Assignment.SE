<!-- Write a PHP program to find the largest of three numbers using ternary
Operator. -->

<?php

$num1 = 5;
$num2 = 10;
$num3 = 15;

$max = ($num1 > $num2) ? (($num1 > $num3) ? $num1 : $num3) : (($num2 > $num3) ? $num2 : $num3);

echo "The largest number is: $max\n";

?>
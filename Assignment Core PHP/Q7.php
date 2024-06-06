<!-- Write a PHP program to print the below format :
5 9
2610
3711
4812 -->

<?php
echo "5 9\n";
for ($i = 2; $i <= 4; $i++)
{
    echo $i. " ". ($i + 4). " ". ($i + 8). "\n";
}
?>


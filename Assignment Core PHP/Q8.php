<!-- Write a PHP program to print pattern:
*****
*
*
*
***** -->
<?php
for ($i = 1; $i <= 5; $i++)
{
    if ($i == 1 || $i == 5)
    {
        for ($j = 1; $j <= 5; $j++)
        {
            echo "*";
        }
        echo "<br>";
    } else {
        echo "*     <br>";
    }
}
?>


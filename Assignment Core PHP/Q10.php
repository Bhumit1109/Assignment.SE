<!-- How can you tell if a number is even or odd without using any Condition or
loop? -->

<?php
function isEven($num)
{
    return !($num & 1);
}

function isOdd($num)
{
    return ($num & 1);
}

$num = 6; // Change the number here to test

if (isEven($num))
{
    echo "$num is even.";
}
else
{
    echo "$num is odd.";
}
?>

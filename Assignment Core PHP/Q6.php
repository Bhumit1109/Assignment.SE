<!-- Write a PHP program to find whether a number is Armstrong or not. -->

<?php
function Armstrong($num)
{
    $sum = 0;
    $temp = $num;
    $digitCount = strlen((string)$num);

    while ($temp!= 0)
    {
        $digit = $temp % 10;
        $sum += pow($digit, $digitCount);
        $temp = (int)($temp / 10);
    }

    if ($sum == $num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

$num = 153;
if (Armstrong($num))
{
    echo "$num is an Armstrong number.";
}
else
{
    echo "$num is not an Armstrong number.";
}
?>
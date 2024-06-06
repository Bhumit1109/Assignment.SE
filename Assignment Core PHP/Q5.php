<!-- Write a program in PHP to print Fibonacci series. 0, 1, 1, 2, 3, 5, 8, 13, 21, 34. -->

<?php
function fibonacci($n)
{
    $first_num = 0;
    $second_num = 1;
    echo "Fibonacci Series: $first_num, $second_num";

    for ($i = 2; $i < $n; $i++)
    {
        $next_num = $first_num + $second_num;
        echo ", $next_num";
        $first_num = $second_num;
        $second_num = $next_num;
    }
}

$n = 10; // Number of elements you want in the series
fibonacci($n);
?>
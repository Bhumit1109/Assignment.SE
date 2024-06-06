<?php

$balances = array(
    array(10.50, 20.75, 30.12, 40.99, 50.25),
    array(60.11, 70.22, 80.33, 90.44, 100.55),
    array(110.66, 120.77, 130.88, 140.99, 151.10)
);

foreach ($balances as $row)
{
    print_r($row);
    echo "<br>";
}

?>
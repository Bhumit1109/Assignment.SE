<?php
// Define an array
$Weekdays = array("Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday");

// Get a random key from the array
$randomKey = array_rand($Weekdays);

// Get the random value from the array using the random key
$randomWeekdays = $Weekdays[$randomKey];

echo "Random day: $randomWeekdays";
?>

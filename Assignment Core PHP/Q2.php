<!-- Write a PHP program for find „Thursday‟ in week using switch
Function. -->

<?php

$date = date("l"); // get the current day of the week

switch ($date) {
    case "Monday":
        echo "Today is Monday. Thursday is in 3 days.";
        break;
    case "Tuesday":
        echo "Today is Tuesday. Thursday is in 2 days.";
        break;
    case "Wednesday":
        echo "Today is Wednesday. Thursday is in 1 day.";
        break;
    case "Thursday":
        echo "Today is Thursday!";
        break;
    case "Friday":
        echo "Today is Friday. Thursday was yesterday.";
        break;
    case "Saturday":
        echo "Today is Saturday. Thursday was 2 days ago.";
        break;
    case "Sunday":
        echo "Today is Sunday. Thursday was 3 days ago.";
        break;
    default:
        echo "Error: Unable to determine the day of the week.";
        break;
}

?>
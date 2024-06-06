<!-- Write a PHP program to enter marks of five subjects Physics, Chemistry,
Biology, Mathematics and Computer, calculate percentage and grade by if
else -->
<?php

$physics = 70;
$chemistry = 65;
$biology = 85;
$mathematics = 80;
$computer = 90;

$total_marks = $physics + $chemistry + $biology + $mathematics + $computer;

$percentage = ($total_marks / 500) * 100;

// Calculate the grade using if-else statements
if ($percentage >= 90) {
    $grade = "A";
} elseif ($percentage >= 80) {
    $grade = "B";
} elseif ($percentage >= 70) {
    $grade = "C";
} elseif ($percentage >= 60) {
    $grade = "D";
} else {
    $grade = "F";
}

echo "Total Marks: $total_marks\n";
echo "Percentage: $percentage%\n";
echo "Grade: $grade\n";

?>

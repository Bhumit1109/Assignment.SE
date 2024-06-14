<?php

// How can you declare the array (all type) in PHP? Explain with example.

//1. Indexed Arrays: These are arrays where each element is identified by a numeric index.

// For Example:
    $numbers = array(1, 2, 3, 4, 5);

//2. Associative Arrays: These are arrays where each element is associated with a specific key.

// For Example:
    $person = array("name" => "Bhumit", "age" => 27, "city" => "Ahmedabad");

//3. Multidimensional Arrays: These are arrays containing one or more arrays as elements.

// For Example:
   $matrix = array(
       array(1, 2, 3),
       array(4, 5, 6),
       array(7, 8, 9)
    );

//4. Mixed Type Arrays: PHP allows arrays to contain elements of different types.

// For Example:
   $mixed = array(1, "two", 3.5, true, array("nested", "array"));

//5. Empty Array: You can declare an empty array and add elements dynamically later.

// For Example:
   $emptyArray = array();

?>
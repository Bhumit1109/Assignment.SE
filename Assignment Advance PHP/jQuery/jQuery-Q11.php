<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dynamic Required Field Validator</title>
</head>
<body>
    <form id="myForm">
        <label for="username">Username:</label>
        <input type="text" id="username" name="username">
        <br>
        <label for="email">Email:</label>
        <input type="email" id="email" name="email">
        <br>
        <button type="submit">Submit</button>
    </form>

    <script>
        // Function to dynamically validate required fields
        function validateRequiredFields(formId, conditions) {
            const form = document.getElementById(formId);
            const elements = form.elements;
            let isValid = true;

            for (let i = 0; i < elements.length; i++) {
                const field = elements[i];
                const fieldName = field.name;

                // Check if the field has a condition and if the condition is met
                if (conditions[fieldName] && conditions[fieldName]() === true) {
                    if (!field.value.trim()) {
                        isValid = false;
                        field.style.borderColor = 'red'; // Highlight the field
                        // Optionally, add an error message
                        // You can also use libraries like Toastify for better UX
                    } else {
                        field.style.borderColor = ''; // Reset field border color
                    }
                }
            }

            return isValid;
        }

        // Example conditions function
        function getConditions() {
            return {
                username: () => true, // Always required
                email: () => true,    // Always required
                // Add dynamic conditions as needed
                // For example, conditionally require fields based on other inputs
            };
        }

        // Handle form submission
        document.getElementById('myForm').addEventListener('submit', function(event) {
            const conditions = getConditions();
            if (!validateRequiredFields('myForm', conditions)) {
                event.preventDefault(); // Prevent form submission if validation fails
                alert('Please fill out all required fields.');
            }
        });
    </script>
</body>
</html>

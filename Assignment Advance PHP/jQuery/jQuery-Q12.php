<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dynamic State Dropdown</title>
    <script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
</head>
<body>
    <form id="locationForm">
        <label for="country">Country:</label>
        <select id="country" name="country">
            <option value="">Select a country</option>
            <option value="us">United States</option>
            <option value="ca">Canada</option>
            <!-- Add more countries as needed -->
        </select>

        <label for="state">State:</label>
        <select id="state" name="state">
            <option value="">Select a state</option>
        </select>
    </form>

    <script>
        $(document).ready(function() {
            $('#country').change(function() {
                var country = $(this).val();
                if (country) {
                    $.ajax({
                        url: 'getStates.php', // Replace with the path to your server-side script
                        type: 'GET',
                        data: { country: country },
                        dataType: 'json',
                        success: function(response) {
                            var $stateSelect = $('#state');
                            $stateSelect.empty(); // Clear existing options
                            $stateSelect.append('<option value="">Select a state</option>'); // Add default option

                            $.each(response, function(index, state) {
                                $stateSelect.append('<option value="' + state.code + '">' + state.name + '</option>');
                            });
                        },
                        error: function() {
                            alert('Failed to retrieve states. Please try again later.');
                        }
                    });
                } else {
                    $('#state').empty().append('<option value="">Select a state</option>'); // Clear state dropdown
                }
            });
        });
    </script>
</body>
</html>

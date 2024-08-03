<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Image Upload with Preview</title>
    <style>
        #preview {
            margin-top: 10px;
        }
        #preview img {
            max-width: 300px; /* Limit the preview image size */
            height: auto;
            border: 1px solid #ddd;
            padding: 5px;
        }
    </style>
    <script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
</head>
<body>
    <form id="uploadForm">
        <label for="fileInput">Choose an image:</label>
        <input type="file" id="fileInput" name="fileInput" accept="image/*">
        <div id="preview">
            <img id="previewImg" src="" alt="Image Preview" style="display: none;">
        </div>
    </form>

    <script>
        $(document).ready(function() {
            $('#fileInput').on('change', function(event) {
                var file = event.target.files[0];
                if (file) {
                    var reader = new FileReader();
                    
                    reader.onload = function(e) {
                        $('#previewImg').attr('src', e.target.result).show();
                    };
                    
                    reader.readAsDataURL(file);
                } else {
                    $('#previewImg').hide();
                }
            });
        });
    </script>
</body>
</html>

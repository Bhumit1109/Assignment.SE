<?php include 'config.php'?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Index</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">
<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-MrcW6ZMFYlzcLA8Nl+NtUVF0sA7MsXsP1UyJoMp4YLEuNSfAP+JcXn/tWtIaxVXM" crossorigin="anonymous"></script>
    <script src="https://code.jquery.com/jquery-3.7.1.js" integrity="sha256-eKhayi8LEQwp4NKxN+CfCh+3qOVUtJn3QNZ0TciWLP4=" crossorigin="anonymous"></script>
</head>
<body>
    <div class="container mt-5">
        <form id="addForm">
            Name : <input type="text" name="sname">
            Age : <input type="text" name="sage">
            City : <input type="text" name="scity">
            <input type="Submit" id="saveButton" value="Save">
        </form>
    </div>
    <div>
    <table>
        <thead>
            <th>Name</th>
            <th>Age</th>
            <th>City</th>
            <th>Edit</th>
            <th>Delete</th>
        </thead>
        <tbody id="load-data"></tbody>
    </table>
    </div>

    <div class="modal fade" id="exampleModal" tabindex="-1" aria-labelledby="exampleModalLabel" aria-hidden="true">
  <div class="modal-dialog">
    <div class="modal-content">
      <div class="modal-header">
        <h5 class="modal-title" id="exampleModalLabel">Edit</h5>
        <button type="button" class="btn-close" data-bs-dismiss="modal" aria-label="Close"></button>
      </div>
      <div class="modal-body">
      <form id="editForm">
            Name : <input type="text" name="sname" id="sname">
            Age : <input type="text" name="sage" id="sage">
            City : <input type="text" name="scity" id="scity">
            <input type="Submit" id="editButton" value="edit">
        </form>
      </div>
      <div class="modal-footer">
        <button type="button" class="btn btn-secondary" data-bs-dismiss="modal">Close</button>
        <button type="button" class="btn btn-primary">Save changes</button>
      </div>
    </div>
  </div>
</div>

    <script>
         $(document).on('click','.editBtn',function(){
            x = $(this).data('abc');
            obj = {uid:x};
            // console.log(obj);
            a = JSON.stringify(obj);
            // console.log(a);
            $.ajax({
                url:'http://localhost/php/api/fetch-single-data.php',
                type:'POST',
                data: a,
                success: function(r){
                    // console.log(r[0].user_name);

                    $('#sname').val(r[0].user_name)
                    $('#sage').val(r[0].age)
                    $('#scity').val(r[0].city)
                },
            })
        })

    function getData()
    {
        $('#load-data').html("");
        $.ajax({
            url:'http://localhost/php/api/fetch-all.php',
            type: 'get',
            success: function(xyz){
                // console.log(xyz);
                $.each(xyz,function(key,value)
            {
                // console.log(value.user_name)
                // console.log(value.age)
                // console.log(value.city)
                $('#load-data').append(`<tr>
                <td>${value.user_name}</td>
                <td>${value.age}</td>
                <td>${value.city}</td>
                <td>
                <button data-abc='${value.id}' type="button" class="btn btn-primary editBtn" data-bs-toggle="modal" data-bs-target="#exampleModal">Edit</button>
                </td>
                <td>
                <button data-abc='${value.id}' type="button" class="btn btn-danger deleteBtn" data-bs-toggle="modal" data-bs-target="#exampleModal">Delete</button>
                </td>
            </tr>`);
            })
            },
        })
    }  
    getData();

        function jsonData(targetform)
        {
              var aar = $(targetform).serializeArray();
              obj ={}
              for(i=0;i<aar.length;i++)
              {
              obj[aar[i].name] = aar[i].value;
              
              }

             json_string = JSON.stringify(obj)
             return json_string;
        }
        $('#saveButton').click(function(e){
            e.preventDefault();
            // console.log(e)
            const x = jsonData("#addForm");
            $.ajax(
                {
                url: 'http://localhost/php/api/insert.php',
                type: "POST",
                data: x,
                success: function(data) {
                    console.log(data);
                },
            }
            )
            
        })
    </script>
</body>
</html>


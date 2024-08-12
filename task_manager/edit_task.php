<?php
include 'config.php';

if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    $id = $_POST['task_id'] ?? 0;
    $description = $_POST['description'] ?? '';
    if ($id > 0 && !empty($description)) {
        $sql = "UPDATE tasks SET description = ? WHERE id = ?";
        $stmt = $conn->prepare($sql);
        $stmt->bind_param('si', $description, $id);
        $stmt->execute();
        header("Location: index.php");
        exit();
    }
} elseif (isset($_GET['id'])) {
    $id = $_GET['id'];
    $sql = "SELECT * FROM tasks WHERE id = ?";
    $stmt = $conn->prepare($sql);
    $stmt->bind_param('i', $id);
    $stmt->execute();
    $result = $stmt->get_result();
    $task = $result->fetch_assoc();
} else {
    header("Location: index.php");
    exit();
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Edit Tasks</title>
    <link rel="stylesheet" href="task_manager.css">
</head>
<body>
    <div class="container">
        <h1>Edit Task</h1>
        <form action="edit_task.php" method="POST">
            <input type="hidden" name="task_id" value="<?= $task['id'] ?>">
            <input type="text" name="description" value="<?= htmlspecialchars($task['description']) ?>" required>
            <button type="submit">Save Changes</button>
        </form>
        <button><a href="index.php">Back to Task List</a></button>
    </div>
</body>
</html>

<?php $conn->close(); ?>

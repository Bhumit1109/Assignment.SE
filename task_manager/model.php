<?php
include 'config.php';

// Handle form submission for adding, completing, deleting, and editing tasks
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    $action = $_POST['action'] ?? '';

    if ($action == 'Add') {
        $description = $_POST['description'] ?? '';
        if (!empty($description)) {
            $sql = "INSERT INTO tasks (description) VALUES (?)";
            $stmt = $conn->prepare($sql);
            $stmt->bind_param('s', $description);
            $stmt->execute();
        }
    } elseif ($action == 'Complete') {
        $id = $_POST['task_id'] ?? 0;
        if ($id > 0) {
            $sql = "UPDATE tasks SET is_completed = 1, completed_at = NOW() WHERE id = ?";
            $stmt = $conn->prepare($sql);
            $stmt->bind_param('i', $id);
            $stmt->execute();
        }
    } elseif ($action == 'Delete') {
        $id = $_POST['task_id'] ?? 0;
        if ($id > 0) {
            $sql = "DELETE FROM tasks WHERE id = ?";
            $stmt = $conn->prepare($sql);
            $stmt->bind_param('i', $id);
            $stmt->execute();
        }
    } elseif ($action == 'Edit') {
        $id = $_POST['task_id'] ?? 0;
        $description = $_POST['description'] ?? '';
        if ($id > 0 && !empty($description)) {
            $sql = "UPDATE tasks SET description = ? WHERE id = ?";
            $stmt = $conn->prepare($sql);
            $stmt->bind_param('si', $description, $id);
            $stmt->execute();
        }
    }
}

// Fetch all tasks
$sql = "SELECT * FROM tasks ORDER BY created_at DESC";
$result = $conn->query($sql);
?>
<?php $conn->close(); ?>
<?php include 'model.php'; ?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Task List Manager</title>
    <link rel="stylesheet" href="task_manager.css">
</head>
<body>
    <div class="container">
        <h1>Task List Manager</h1>
        <form action="index.php" method="POST" class="task-form">
            <input type="text" name="description" placeholder="Enter task description" required>
            <button type="submit" name="action" value="Add">Add Task</button>
        </form>
        <div class="task-list">
            <h2>Tasks</h2>
            <ul>
                <?php while ($row = $result->fetch_assoc()): ?>
                <li class="task-item <?= $row['is_completed'] ? 'completed' : '' ?>">
                    <div class="task-details">
                        <div><?= htmlspecialchars($row['description']) ?></div>
                        <div class="task-timestamp">Added: <?= $row['created_at'] ?></div>
                        <?php if ($row['completed_at']): ?>
                        <div class="task-timestamp">Completed: <?= $row['completed_at'] ?></div>
                        <?php endif; ?>
                    </div>
                    <div class="task-actions">
                        <?php if (!$row['is_completed']): ?>
                        <form action="index.php" method="POST" style="display:inline;">
                            <input type="hidden" name="task_id" value="<?= $row['id'] ?>">
                            <button type="submit" name="action" value="Complete">Complete</button>
                        </form>
                        <?php endif; ?>
                        <form action="edit_task.php" method="GET" style="display:inline;">
                            <input type="hidden" name="id" value="<?= $row['id'] ?>">
                            <button type="submit">Edit</button>
                        </form>
                        <form action="index.php" method="POST" style="display:inline;">
                            <input type="hidden" name="task_id" value="<?= $row['id'] ?>">
                            <button type="submit" name="action" value="Delete">Delete</button>
                        </form>
                    </div>
                </li>
                <?php endwhile; ?>
            </ul>
        </div>
    </div>
</body>
</html>

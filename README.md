# Student Record Management

A simple application for managing student records, including adding, updating, viewing, and deleting student information.

## Features

- Add new student records
- Update existing student details
- View all student records
- Delete student records
- Get the average of students scores
- Save and load student records from txt.file
- Modify student records
- Search for students by roll number
- Sort students in ascending and descending order

## 👥 Team Assignments

Each teammate implements **2 modules** and tests them with provided harnesses.

| Member        | Modules                                   | Test Files                        |
|---------------|-------------------------------------------|-----------------------------------|
| **Person 1**  | `view_students.c`, `search_student.c`     | `test_view.c`, `test_search.c`    |
| **Person 2**  | `add_student.c`, `modify_student.c`       | `test_add.c`, `test_modify.c`     |
| **Person 3**  | `delete_student.c`, `sort_students.c`     | `test_delete.c`, `test_sort.c`    |
| **Person 4**  | `file_handling.c`, `analytics.c`          | `test_file.c`, `test_analytics.c` |
| **Team Lead** | `menu.c`, `main.c` (integration)          | `test_menu.c` (optional)          |

---

## 🛠 How Each Team Member Works

Each team member should work on their assigned modules in a separate Git branch. This helps keep the main branch stable and makes collaboration easier.

### Steps for Each Member

1. **Pull the latest changes:**
    ```bash
    git checkout main
    git pull origin main
    ```

2. **Create a new branch for your modules:**
    ```bash
    git checkout -b <your-branch-name>
    ```
    Example:
    ```bash
    git checkout -b add-student-feature
    ```

3. **Work on your assigned files and commit changes:**
    ```bash
    git add modules/<your_module>.c tests/<your_test>.c
    git commit -m "Implement <feature> and add tests"
    ```

4. **Push your branch to the remote repository:**
    ```bash
    git push origin <your-branch-name>
    ```

5. **Open a Pull Request** to merge your branch into `main` after your code is reviewed and tested.

> **Tip:** Repeat these steps for each module you are assigned. Always keep your branch up to date with `main` by pulling regularly.


---

## ✅ How to Compile & Test Your Module

Example: If you are working on `add_student.c`, compile with its test harness:

```bash
gcc tests/test_add.c modules/add_student.c -o test_add
./test_add
```

Another example for the Delete module:

```bash
gcc tests/test_delete.c modules/delete_student.c -o test_delete
./test_delete
```

---

## Contributing

Contributions are welcome! Please open an issue or submit a pull request.

## License

This project is licensed under the MIT License.
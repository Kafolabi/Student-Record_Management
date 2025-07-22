# Student Record Management

A simple application for managing student records, including adding, updating, viewing, and deleting student information.

## Features

- Add new student records
- Update existing student details
- View all student records
- Delete student records

## Technologies Used

- Python (or specify your language)
- SQLite/MySQL/PostgreSQL (or specify your database)
- Flask/Django (if applicable)
- HTML/CSS/JavaScript (if applicable)

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

1. **Open your assigned module(s) inside `modules/`.**
2. Follow the **numbered pseudocode comments** inside each file.
3. Use your **test harness in `tests/`** to test only your module.
4. Once it works, send ONLY your `.c` files from `modules/` back to the team lead.

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
#include <stdio.h>
#include <string.h>
#include "../student.h"

void addStudent() {
    // 1️⃣  Check if studentCount >= MAX_STUDENTS
    //     - If yes, print "List is full!" and return.

    // 2️⃣  Create a temporary Student variable (e.g. Student s;)

    // 3️⃣  Ask for student name:
    //     - Call clearBuffer() first
    //     - Use fgets() to get the name
    //     - Remove newline using strcspn()

    // 4️⃣  Ask for roll number:
    //     - scanf("%d", &s.rollNo)
    //     - Use findStudentIndex() to check if rollNo already exists
    //       If it exists, print "Roll number already exists!" and return.

    // 5️⃣  Ask for marks:
    //     - scanf("%f", &s.marks)

    // 6️⃣  Add the student to the global array:
    //     students[studentCount++] = s;

    // 7️⃣  Print "Student added successfully!"
}

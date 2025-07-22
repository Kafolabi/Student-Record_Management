#include <stdio.h>
#include "../student.h"

void deleteStudent() {
    // 1️⃣  Ask for roll number to delete (scanf)

    // 2️⃣  Find the student index using findStudentIndex()

    // 3️⃣  If not found:
    //       print "Student not found." and return.

    // 4️⃣  If found:
    //       - Shift all students after idx one step left:
    //         for (i = idx; i < studentCount - 1; i++) students[i] = students[i + 1];
    //       - Decrease studentCount--
    //       - Print "Student deleted successfully!"
}

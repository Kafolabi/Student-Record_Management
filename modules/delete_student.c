#include <stdio.h>
#include "../student.h"

void deleteStudent() {
    // 1️⃣  Ask for roll number to delete (scanf)
    int rollNumber;
    printf("Enter the roll number of the student to delete: ");
    scanf("%d", &rollNumber);
       
    // 2️⃣  Find the student index using findStudentIndex()
    int idx = findStudentIndex(rollNumber);
    

    // 3️⃣  If not found:
    //       print "Student not found." and return.
    if (idx == -1) {
        printf("Student not found.\n");
            return;
    }

    // 4️⃣  If found:
    //       - Shift all students after idx one step left:
    for (int i = idx; i < studentCount - 1; i++) {
        students[i] = students[i + 1];
    }
    studentCount--;
    //       - Print "Student deleted successfully!"
    
    printf("Student deleted successfully!\n");
}

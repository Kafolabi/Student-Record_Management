#include "../student.h"
#include <stdio.h>

// 1. Loop through all students
// 2. Print each student's details

void viewAllStudents() {
    if (studentCount == 0) {
        printf("No student records found.\n");
        return;
    }
    printf("List of Students:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("Name: %s | Roll No: %d | Marks: %.2f\n",
               students[i].name,
               students[i].rollNo,
               students[i].marks);
    }
}

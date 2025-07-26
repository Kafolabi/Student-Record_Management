#include "../student.h"
#include <stdio.h>

void searchStudent() {
    int rollNo;
    printf("Enter roll number to search: ");
    scanf("%d", &rollNo);

    int index = findStudentIndex(rollNo);

    if (index == -1) {
        printf("Student not found.\n");
    } else {
        printf("Student found:\n");
        printf("Name: %s\n", students[index].name);
        printf("Roll No: %d\n", students[index].rollNo);
        printf("Marks: %.2f\n", students[index].marks);
    }
}

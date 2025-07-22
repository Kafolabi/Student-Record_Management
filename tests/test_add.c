#include <stdio.h>
#include "../student.h"

Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent();

int main() {
    printf("=== Test Add Student ===\n");
    addStudent();
    printf("Student Count: %d\n", studentCount);
    return 0;
}

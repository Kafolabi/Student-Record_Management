#include <stdio.h>
#include "../student.h"

Student students[MAX_STUDENTS] = {
    {"Alice", 1, 90},
    {"Bob", 2, 80},
    {"Charlie", 3, 70}
};
int studentCount = 3;

void deleteStudent();

int main() {
    printf("=== Test Delete Student ===\n");
    printf("Before delete:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%s %d %.2f\n", students[i].name, students[i].rollNo, students[i].marks);
    }
    deleteStudent(); // enter roll no 2 or 3
    printf("\nAfter delete:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%s %d %.2f\n", students[i].name, students[i].rollNo, students[i].marks);
    }
    return 0;
}

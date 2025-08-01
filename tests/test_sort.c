#include <stdio.h>
#include "../student.h"
Student students[MAX_STUDENTS] = {
    {"Alice", 1, 90},
    {"Bob", 2, 80},
    {"Charlie", 3, 70}
};
int studentCount = 3;
void sortStudents(int ascending);
void printStudents() {
    for (int i = 0; i < studentCount; i++) {
        printf("%s %d %.2f\n", students[i].name, students[i].rollNo, students[i].marks);
    }
}

int main() {
    printf("=== Test Sort Students ===\n");
    printf("\nBefore sorting:\n");
    printStudents();
    printf("\nSorting Ascending...\n");
    sortStudents(1);
    printStudents();
    printf("\nSorting Descending...\n");
    sortStudents(0);
    printStudents();
    return 0;
}

#include <stdio.h>
#include "../student.h"

Student students[MAX_STUDENTS] = {
    {"Alice", 1, 90},
    {"Bob", 2, 80}
};
int studentCount = 2;

void modifyStudent();

int main() {
    printf("=== Test Modify Student ===\n");
    modifyStudent(); // enter roll no 1 or 2
    printf("\nAfter modification:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%s %d %.2f\n", students[i].name, students[i].rollNo, students[i].marks);
    }
    return 0;
}

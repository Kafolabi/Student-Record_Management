#include <stdio.h>
#include "../student.h"

Student students[MAX_STUDENTS] = {
    {"Alice", 1, 90},
    {"Bob", 2, 80}
};
int studentCount = 2;

void viewAllStudents();

int main() {
    printf("=== Test View Students ===\n");
    viewAllStudents();
    return 0;
}

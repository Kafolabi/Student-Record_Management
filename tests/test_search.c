#include <stdio.h>

#include "../student.h"

Student students[MAX_STUDENTS] = {
    {"Alice", 1, 90},
    {"Bob", 2, 80}
};
int studentCount = 2;

void searchStudent();

int main() {
    printf("=== Test Search Student ===\n");
    searchStudent(); // enter 1 or 2
    return 0;
}

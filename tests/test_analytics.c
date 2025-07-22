#include <stdio.h>
#include "../student.h"

Student students[MAX_STUDENTS] = {
    {"Alice", 1, 90},
    {"Bob", 2, 80},
    {"Charlie", 3, 70}
};
int studentCount = 3;

void calculateAverage();

int main() {
    printf("=== Test Calculate Average ===\n");
    calculateAverage(); // should print average = 80
    return 0;
}

#include <stdio.h>
#include "../student.h"

Student students[MAX_STUDENTS];
int studentCount = 0;

void menu();

int main() {
    printf("=== Test Menu ===\n");
    menu(); // interactive full menu
    return 0;
}

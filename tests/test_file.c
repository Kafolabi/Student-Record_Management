#include <stdio.h>
#include "../student.h"

Student students[MAX_STUDENTS] = {
    {"Alice", 1, 90},
    {"Bob", 2, 80}
};
int studentCount = 2;

void saveToFile();
void loadFromFile();

int main() {
    printf("=== Test Save & Load ===\n");

    printf("Saving records...\n");
    saveToFile();

    // reset memory
    studentCount = 0;

    printf("Loading records...\n");
    loadFromFile();

    printf("\nLoaded Students:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%s %d %.2f\n", students[i].name, students[i].rollNo, students[i].marks);
    }

    return 0;
}

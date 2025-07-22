#include <stdio.h>
#include "student.h"

// actual definitions of globals
Student students[MAX_STUDENTS];
int studentCount = 0;

void clearBuffer() {
    while (getchar() != '\n');
}

int findStudentIndex(int rollNo) {
    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNo == rollNo) return i;
    }
    return -1;
}

// external functions
void loadFromFile();
void menu();

int main() {
    loadFromFile();  // load saved records if any
    menu();          // start program menu
    return 0;
}

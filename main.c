#include <stdio.h>
#include <string.h>
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
    char userName[100];

    printf("Welcome to the Student Record Management System!\n");
    printf("Please enter your name: ");
    if (fgets(userName, sizeof(userName), stdin) != NULL) {
        size_t len = strlen(userName);
        if (len > 0 && userName[len - 1] == '\n') {
            userName[len - 1] = '\0'; // Remove trailing newline
        }
    }
    printf("Welcome, %s!\n", userName);

    loadFromFile();  // load saved records if any
    menu();          // start program menu
    return 0;
}

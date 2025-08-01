#include <stdio.h>
#include <string.h>
#include "../student.h"

void modifyStudent() {
    if (studentCount == 0) {
        printf("No students to modify!\n");
        return;
    }

    int rollNo;
    printf("Enter roll number of the student to modify: ");
    if (scanf("%d", &rollNo) != 1) {
        printf("Invalid roll number!\n");
        clearBuffer();
        return;
    }
    clearBuffer();

    // Find the student
    int index = findStudentIndex(rollNo);
    if (index == -1) {
        printf("Student with roll no %d not found!\n", rollNo);
        return;
    }

    Student *s = &students[index];

    printf("\nWhat do you want to modify?\n");
    printf("1. Name\n");
    printf("2. Roll Number\n");
    printf("3. Marks\n");
    printf("Choose (1-3): ");

    int choice;
    if (scanf("%d", &choice) != 1) {
        printf("Invalid choice!\n");
        clearBuffer();
        return;
    }
    clearBuffer();

    switch (choice) {
        case 1: {
            // Modify only the name
            printf("Enter new name: ");
            fgets(s->name, sizeof(s->name), stdin);
            s->name[strcspn(s->name, "\n")] = '\0';
            printf("✅ Name updated!\n");
            break;
        }
        case 2: {
            // Modify only roll number
            int newRoll;
            printf("Enter new roll number: ");
            if (scanf("%d", &newRoll) != 1) {
                printf("Invalid input!\n");
                clearBuffer();
                return;
            }
            clearBuffer();

            // Check uniqueness
            if (findStudentIndex(newRoll) != -1) {
                printf("❌ Roll number already exists!\n");
                return;
            }
            s->rollNo = newRoll;
            printf("✅ Roll number updated!\n");
            break;
        }
        case 3: {
            // Modify only marks
            float newMarks;
            printf("Enter new marks (0-100): ");
            if (scanf("%f", &newMarks) != 1 || newMarks < 0 || newMarks > 100) {
                printf("Invalid marks!\n");
                clearBuffer();
                return;
            }
            clearBuffer();
            s->marks = newMarks;
            printf("✅ Marks updated!\n");
            break;
        }
        default:
            printf("Invalid choice!\n");
    }
}

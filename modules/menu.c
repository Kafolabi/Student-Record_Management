#include <stdio.h>
#include "../student.h"

// external function declarations

void addStudent();
void viewAllStudents();
void searchStudent();
void modifyStudent();
void deleteStudent();
void calculateAverage();
void sortStudents(int ascending);
void saveToFile();

void menu() {

    // 1️⃣  Start a do-while loop for the menu

    int choice;

    // 2️⃣  Print menu options:
    //       1.Add 2.View 3.Search 4.Modify 5.Delete 6.Average 7.Sort 8.Save 9.Exit

    // Control flow
    // Conditional statements: if/else, switch/case
    // Loops(iteratives): for, while, do-while

    do {
        printf("\n=== Student Management System Menu ===\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search Student\n");
        printf("4. Modify Student\n");
        printf("5. Delete Student\n");
        printf("6. Calculate Average Marks\n");
        printf("7. Sort Students\n");
        printf("8. Save Records to File\n");
        printf("9. Exit\n");

        // 3️⃣  scanf("%d", &choice)
        printf("Enter your choice: ");
        scanf("%d", &choice);
        clearBuffer(); // Clear the input buffer after scanf


    // 4️⃣  Use switch(choice):
        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewAllStudents(); break;
            case 3: searchStudent(); break;
            case 4: modifyStudent(); break;
            case 5: deleteStudent(); break;
            case 6: calculateAverage(); break;
            case 7: {
                int sortChoice;

                printf("Sort in ascending (1) or descending (2) order? ");
                scanf("%d", &sortChoice);
                clearBuffer();
                sortStudents(sortChoice == 1);
                break;
            }
            case 8: saveToFile(); break;
            case 9: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 9); // Continue until user chooses to exit
}

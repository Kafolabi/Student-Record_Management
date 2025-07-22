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
    // 2️⃣  Print menu options:
    //       1.Add 2.View 3.Search 4.Modify 5.Delete 6.Average 7.Sort 8.Save 9.Exit
    // 3️⃣  scanf("%d", &choice)
    // 4️⃣  Use switch(choice):
    //       case 1 -> addStudent();
    //       case 2 -> viewAllStudents();
    //       case 3 -> searchStudent();
    //       ...
    // 5️⃣  For Sort option:
    //       ask if ascending (1) or descending (2)
    // 6️⃣  Loop until choice == 9
}

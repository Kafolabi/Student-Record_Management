#include <stdio.h>
#include "../student.h"

void printStudents() {
    for (int i = 0; i < studentCount; i++) {
        printf("%s %d %.2f\n", students[i].name, students[i].rollNo, students[i].marks);
    }
}

void sortStudents(int ascending) {
    // 1️⃣  If studentCount < 2, no need to sort, just return.
    if (studentCount < 2) return;


    Student temp;

    // 2️⃣  Use Bubble Sort Algorithm to sort students based on marks:
    // - Outer loop: from 0 to studentCount-2
    // - Inner loop: from 0 to studentCount-i-2

    // - Compare students[j].marks and students[j+1].marks
    //   IF ascending: swap if marks[j] > marks[j+1]
    //   ELSE descending: swap if marks[j] < marks[j+1]

    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = 0; j < studentCount - i - 1; j++) {
            int condition = ascending
                ? (students[j].marks < students[j + 1].marks)
                : (students[j].marks > students[j + 1].marks);

            if (condition) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    // 3️⃣  After sorting, print "Students sorted in ascending/descending order."

    printf("Students sorted in %s order.\n", ascending ? "ascending" : "descending");
    printStudents();
}

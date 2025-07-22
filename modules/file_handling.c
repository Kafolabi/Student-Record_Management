#include <stdio.h>
#include "../student.h"

void saveToFile() {
    // 1️⃣  Open file in write mode: FILE *fp = fopen("students.txt", "w");
    //     - If fp == NULL, print error & return

    // 2️⃣  Loop through all students:
    //     fprintf(fp, "%s %d %.2f\n", students[i].name, students[i].rollNo, students[i].marks);

    // 3️⃣  Close the file
    //     Print "Records saved successfully."
}

void loadFromFile() {
    // 1️⃣  Open file in read mode: FILE *fp = fopen("students.txt", "r");
    //     - If file doesn’t exist, just return (no records yet)

    // 2️⃣  Reset studentCount = 0

    // 3️⃣  While fscanf(fp, "%s %d %f", ...) == 3:
    //       - Fill students[studentCount]
    //       - studentCount++

    // 4️⃣  Close the file
}

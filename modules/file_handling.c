#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "../student.h"

#define FILE_NAME "students.txt"

// ✅ Match student.h: fixed-size array, not a pointer
extern Student students[MAX_STUDENTS];
extern int studentCount;

void saveToFile() {
    FILE *fp = fopen(FILE_NAME, "w");
    if (!fp) {
        perror("❌ Failed to open file for writing");
        return;
    }

    // ✅ Write metadata — student count on first line
    fprintf(fp, "%d\n", studentCount);

    // ✅ Write each student’s data
    for (int i = 0; i < studentCount; i++) {
        fprintf(fp, "%s|%d|%.2f\n",
                students[i].name,
                students[i].rollNo,
                students[i].marks);
    }

    fclose(fp);
    printf("✅ Records saved successfully to '%s'.\n", FILE_NAME);
}

void loadFromFile() {
    FILE *fp = fopen(FILE_NAME, "r");
    if (!fp) {
        if (errno == ENOENT)
            printf("ℹ️ No existing file found. Starting fresh.\n");
        else
            perror("❌ Error opening file for reading");
        return;
    }

    int count;
    if (fscanf(fp, "%d\n", &count) != 1) {
        printf("❌ Error reading metadata (student count).\n");
        fclose(fp);
        return;
    }

    studentCount = 0;  // reset before loading

    char line[200];
    while (fgets(line, sizeof(line), fp) && studentCount < count && studentCount < MAX_STUDENTS) {
        char *token = strtok(line, "|");
        if (!token) continue;
        strcpy(students[studentCount].name, token);

        token = strtok(NULL, "|");
        if (!token) continue;
        students[studentCount].rollNo = atoi(token);

        token = strtok(NULL, "|");
        if (!token) continue;
        students[studentCount].marks = atof(token);

        studentCount++;
    }
    fclose(fp);
    printf("✅ Loaded %d student(s) from '%s'.\n", studentCount, FILE_NAME);
}

// ✅ Optional utility
int isRollNoUnique(int rollNo) {
    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNo == rollNo) {
            return 0; // Not unique
        }
    }
    return 1; // Unique
}

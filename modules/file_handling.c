#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "../student.h"

#define FILE_NAME "students.txt"

extern Student *students;     // Dynamic array of students
extern int studentCount;      // Current number of students

void saveToFile() {
    FILE *fp = fopen(FILE_NAME, "w");
    if (fp == NULL) {
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
    if (fp == NULL) {
        if (errno == ENOENT) {
            printf("ℹ️  No existing file found. Starting fresh.\n");
        } else {
            perror("❌ Error opening file for reading");
        }
        return;
    }

    int count;
    if (fscanf(fp, "%d\n", &count) != 1) {
        printf("❌ Error reading metadata (student count).\n");
        fclose(fp);
        return;
    }

    // ✅ Allocate memory based on metadata
    students = malloc(sizeof(Student) * count);
    if (students == NULL) {
        perror("❌ Memory allocation failed");
        fclose(fp);
        return;
    }

    char line[200];
    studentCount = 0;

    while (fgets(line, sizeof(line), fp) && studentCount < count) {
        char *token;
        token = strtok(line, "|");
        if (token == NULL) continue;
        strcpy(students[studentCount].name, token);

        token = strtok(NULL, "|");
        if (token == NULL) continue;
        students[studentCount].rollNo = atoi(token);

        token = strtok(NULL, "|");
        if (token == NULL) continue;
        students[studentCount].marks = atof(token);

        studentCount++;
    }

    fclose(fp);
    printf("✅ Loaded %d student(s) from '%s'.\n", studentCount, FILE_NAME);
}

// 💡 Optional utility to check for unique roll numbers
int isRollNoUnique(int rollNo) {
    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNo == rollNo) {
            return 0; // Not unique
        }
    }
    return 1; // Unique
}

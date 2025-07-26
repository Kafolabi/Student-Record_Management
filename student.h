#ifndef STUDENT_H
#define STUDENT_H

#define MAX_STUDENTS 100

/**
 * @struct Student
 * @brief Represents a student's basic information.
 *
 * This structure holds the essential details for a student,
 * including their name, roll number, and marks.
 *
 * Members:
 *   name   - Character array to store the student's name (up to 49 characters + null terminator).
 *   rollNo - Integer representing the student's unique roll number.
 *   marks  - Floating-point value representing the student's marks.
 */

typedef struct {
    char name[50];
    int rollNo;
    float marks;
} Student;

// global variables (defined in main.c)
// extern Student students[MAX_STUDENTS];

extern Student students[MAX_STUDENTS]; 
extern int studentCount;

// utility functions
void clearBuffer();
int findStudentIndex(int rollNo);

#endif

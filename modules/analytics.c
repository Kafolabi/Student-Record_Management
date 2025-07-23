// analytics.c
#include <stdio.h>
#include "../student.h"

void calculateAverage() {
    if (studentCount == 0) {
        printf("⚠️  No students to calculate average.\n");
        return;
    }

    float totalMarks = 0.0;

    for (int i = 0; i < studentCount; i++) {
        totalMarks += students[i].marks;
    }

    float average = totalMarks / studentCount;

    printf("✅ Average marks of %d student%s: %.2f\n", 
           studentCount, studentCount == 1 ? "" : "s", average);
}

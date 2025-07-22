#include "../student.h"
#include <stdio.h>


void clearBuffer() {
    while (getchar() != '\n');
}

int findStudentIndex(int rollNo) {
    for (int i = 0; i < studentCount; i++) {
        if (students[i].rollNo == rollNo)
            return i;
    }
    return -1;
}

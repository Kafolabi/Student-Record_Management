#include <stdio.h>
#include "../student.h"

void sortStudents(int ascending) {
    // 1️⃣  If studentCount < 2, no need to sort, just return.

    // 2️⃣  Use Bubble Sort:
    //     - Outer loop from 0 to studentCount-2
    //     - Inner loop from 0 to studentCount-i-2
    //     - Compare students[j].marks and students[j+1].marks
    //         IF ascending: swap if marks[j] > marks[j+1]
    //         ELSE descending: swap if marks[j] < marks[j+1]

    // 3️⃣  After sorting, print "Students sorted in ascending/descending order."
}

#include <stdio.h>
#include <string.h>
#include "../student.h"

void modifyStudent() {
    // 1️⃣  Ask for roll number to modify (scanf)
    int rollNo;

    printf("\n=== Modify Student Record ===\n");

    printf("Enter roll number to modify: ");
    if(scanf("%d", &rollNo) != 1){
        printf("Invalid roll number input!\n");
        clearBuffer();
        return;
    }

    clearBuffer();

    // 2️⃣  Find the student index using findStudentIndex()

    int studentIndex = findStudentIndex(rollNo);


    // 3️⃣  If not found:
    //       print "Student not found." and return.

     if(studentIndex == -1){
        printf("Error: No student found with roll number %d\n", rollNo);
        return;
    }


    // 4️⃣  If found:
    //       - Print current name and marks
    printf("\nCurrent Record:\n");
    printf("Current name: %s\n", students[studentIndex].name);
    printf("Current marks: %.2f\n", students[studentIndex].marks);

    //       - Ask for new name:
    //           clearBuffer() + fgets() + remove newline

    printf("Enter new name: ");
    fgets(students[studentIndex].name, sizeof(students[studentIndex].name), stdin);
    students[studentIndex].name[strcspn(students[studentIndex].name, "\n")] = '\0';
    

    //       - Ask for new marks (scanf)
    //       - Update students[idx] with new values

    printf("Enter new marks: ");
    if(scanf("%f", &students[studentIndex].marks) != 1 || students[studentIndex].marks < 0 || students[studentIndex].marks > 100){
        printf("Invalid input for marks! Must be between 0 and 100.\n");
        clearBuffer();
        return;
    }

     //       - Print "Student record updated!"
    printf("Student record updated!\n");
    printf("New Record:\n");
    printf("Name: %s\n", students[studentIndex].name);
    printf("Marks: %.2f\n", students[studentIndex].marks);
    printf("Press Enter to continue...\n"); // This would serve as a pause, should we clear screen the user can read the success message before it clears
    clearBuffer(); // If not needed, we can remove it.
}

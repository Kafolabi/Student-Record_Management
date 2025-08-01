#include <stdio.h>
#include <string.h>
#include "../student.h"

void addStudent() {
    // 1️⃣  Check if studentCount >= MAX_STUDENTS
    
    if(studentCount >= MAX_STUDENTS){
        printf("List is full!\n");
        return;
    }

    // 2️⃣  Create a temporary Student variable (e.g. Student s;)

    // 3️⃣  Ask for student name:
    //     - Call clearBuffer() first
    //     - Use fgets() to get the name
    //     - Remove newline using strcspn()

    Student s;

    // Name input
    printf("Clearing any previous input (press Enter to continue)...\n");
    clearBuffer(); // This is to clear the buffer of any previous input before entering a new input (To be safe)

    printf("Enter student name: ");
    fgets(s.name, sizeof(s.name), stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    // 4️⃣  Ask for roll number:
    //     - scanf("%d", &s.rollNo)
    //     - Use findStudentIndex() to check if rollNo already exists
    //       If it exists, print "Roll number already exists!" and return.

    printf("Enter roll number: ");
    if(scanf("%d", &s.rollNo) != 1){
        printf("Inalid input for roll number!\n");
        printf("Clearing invalid input... (press Enter to continue)\n");
        clearBuffer();
        return;
    }

    clearBuffer();

    if(findStudentIndex(s.rollNo) != -1){
        printf("Error: Roll number %d already exits!\n", s.rollNo);
        return;
    }


    // 5️⃣  Ask for marks:
    //     - scanf("%f", &s.marks)
    printf("Enter marks (0-100): ");
    if(scanf("%f", &s.marks) != 1 || s.marks < 0 || s.marks > 100){
        printf("Invalid input for marks! Must be between 0 and 100.\n");
        printf("Clearing input buffer... (press Enter to continue)\n");
        clearBuffer();
        return;
    }
    
    clearBuffer();

    // 6️⃣  Add the student to the global array:
    //     students[studentCount++] = s;
    students[studentCount++] = s;

    // 7️⃣  Print "Student added successfully!"
    printf("Student added successfully!\n");
    printf("Press Enter to continue...\n"); // This would serve as a pause, should we clear screen the user can read the success message before it clears
    clearBuffer(); // If not needed, we can remove it.
}

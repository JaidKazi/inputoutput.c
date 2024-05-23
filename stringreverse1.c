#include <stdio.h>

int main() {
    char studentName[50];
    int courseNumber;
    char courseName[50];
    int marks[10]; // Assuming a maximum of 10 subjects
    int numSubjects;

    // Input student details
    printf("Enter student name: ");
    scanf("%s", studentName);

    printf("Enter course number: ");
    scanf("%d", &courseNumber);

    printf("Enter number of subjects: ");
    scanf("%d", &numSubjects);

    // Input details for each subject
    for (int i = 0; i < numSubjects; i++) {
        printf("Enter details for subject %d:\n", i + 1);

        printf("  Course name: ");
        scanf("%s", courseName);

        printf("  Marks: ");
        scanf("%d", &marks[i]);
    }

    // Calculate and print details
    printf("\nSubject-wise details for %s in course %d:\n", studentName, courseNumber);

    int totalMarks = 0;
    for (int i = 0; i < numSubjects; i++) {
        printf("  Subject %d: %s, Marks: %d\n", i + 1, courseName, marks[i]);
        totalMarks += marks[i];
    }

    double averageMarks = (double)totalMarks / numSubjects;

    printf("\nTotal Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);

    // Print student name
    printf("\nStudent Name: %s\n", studentName);

    return 0;
}

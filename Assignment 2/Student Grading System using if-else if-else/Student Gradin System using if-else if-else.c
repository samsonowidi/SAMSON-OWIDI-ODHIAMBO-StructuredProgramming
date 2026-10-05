#include <stdio.h>
#include <stdlib.h>

int main()
{
     int N, i;
    char reg_no[50];
    char name[50];
    float marks;
    char grade;

    // Ask the user for the number of students
    printf("Enter the number of students (N): ");
    scanf("%d", &N);

    // Loop through N students
    for (i = 1; i <= N; i++) {
        printf("\n--- Enter details for Student %d ---\n", i);

        printf("Enter Registration Number: ");
        scanf("%s", reg_no);

        printf("Enter Name: ");
        scanf("%s", name);

        printf("Enter Marks: ");
        scanf("%f", &marks);

        // Determine grade using if-else if-else structure
        if (marks >= 70 && marks <= 100) {
            grade = 'A';
        } else if (marks >= 60) {
            grade = 'B';
        } else if (marks >= 50) {
            grade = 'C';
        } else if (marks >= 40) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        // Display the formatted student information
        printf("\n                    STUDENTS INFORMATION\n");
        printf("Registration No: %s\n", reg_no);
        printf("Name: %s\n", name);
        printf("Marks: %.2f\n", marks);
        printf("Grade: %c\n", grade);

        // Determine pass or fail status using if-else
        if (marks >= 40) {
            printf("Status: PASSED\n");
        } else {
            printf("Status: FAILED\n");
        }
    }

    return 0;
}

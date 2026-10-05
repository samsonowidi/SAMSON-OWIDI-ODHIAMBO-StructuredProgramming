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

        // Input validation for valid marks range (0-100)
        if (marks < 0 || marks > 100) {
            printf("Invalid marks entered! Please enter a value between 0 and 100.\n");
            i--; // Decrement index to re-enter details for this student
            continue;
        }

        // Determine grade using switch case based on (int)marks / 10
        switch ((int)marks / 10) {
            case 10: // For 100 marks
            case 9:  // 90 - 99
            case 8:  // 80 - 89
            case 7:  // 70 - 79
                grade = 'A';
                break;
            case 6:  // 60 - 69
                grade = 'B';
                break;
            case 5:  // 50 - 59
                grade = 'C';
                break;
            case 4:  // 40 - 49
                grade = 'D';
                break;
            default: // 0 - 39
                grade = 'F';
                break;
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

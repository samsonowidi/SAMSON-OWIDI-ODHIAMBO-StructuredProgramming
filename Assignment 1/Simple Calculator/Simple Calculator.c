#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1, num2;


    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    printf("\n--- Results ---\n");
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);


    if (num2 != 0) {
        printf("Division: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
        printf("Modulus: %d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Division and Modulus by zero are not allowed.\n");
    }

    return 0;
}

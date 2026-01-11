#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1, num2, temp;
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Invalid input. Please enter numeric values only.\n");
        return 1;
    }
    printf("\nBefore swapping:\n");
    printf("num1 = %.2lf, num2 = %.2lf\n", num1, num2);
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\nAfter swapping (using temp variable):\n");
    printf("num1 = %.2lf, num2 = %.2lf\n", num1, num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\nAfter swapping again (without temp variable):\n");
    printf("num1 = %.2lf, num2 = %.2lf\n", num1, num2);

    return 0;
}

/* 1. Menu-driven program to perform all arithmetic operations */
#include <stdio.h>

int main() {
    int choice;
    double a, b, result;

    printf("Enter first number: ");
    scanf("%lf", &a);
    printf("Enter second number: ");
    scanf("%lf", &b);

    printf("\n--- Menu ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus (integers only)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = a + b;
            printf("Result: %.2lf + %.2lf = %.2lf\n", a, b, result);
            break;
        case 2:
            result = a - b;
            printf("Result: %.2lf - %.2lf = %.2lf\n", a, b, result);
            break;
        case 3:
            result = a * b;
            printf("Result: %.2lf * %.2lf = %.2lf\n", a, b, result);
            break;
        case 4:
            if (b == 0)
                printf("Error: Division by zero is not allowed.\n");
            else {
                result = a / b;
                printf("Result: %.2lf / %.2lf = %.2lf\n", a, b, result);
            }
            break;
        case 5:
            printf("Result: %d %% %d = %d\n", (int)a, (int)b, (int)a % (int)b);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
/* 10. Simple calculator using switch-case */
#include <stdio.h>

int main() {
    double a, b;
    char op;

    printf("Enter first number, operator (+ - * /), second number:\n");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+':
            printf("Result: %.2lf\n", a + b);
            break;
        case '-':
            printf("Result: %.2lf\n", a - b);
            break;
        case '*':
            printf("Result: %.2lf\n", a * b);
            break;
        case '/':
            if (b == 0)
                printf("Error: Division by zero.\n");
            else
                printf("Result: %.2lf\n", a / b);
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
/* 6. Sum of the digits of a given number */
#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    int original = n;
    if (n < 0) n = -n;

    while (n != 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    printf("Sum of digits of %d = %d\n", original, sum);
    return 0;
}
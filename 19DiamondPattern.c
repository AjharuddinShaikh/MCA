/* 19. Diamond Pattern */
#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows (for upper half): ");
    scanf("%d", &n);

    /* Upper half */
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++)
            printf("*");
        printf("\n");
    }

    /* Lower half */
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++)
            printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++)
            printf("*");
        printf("\n");
    }

    return 0;
}
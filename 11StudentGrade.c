/* 11. Display the grade of a student based on percentage */
#include <stdio.h>

int main() {
    double percentage;

    printf("Enter percentage: ");
    scanf("%lf", &percentage);

    if (percentage > 100 || percentage < 0) {
        printf("Invalid percentage.\n");
    } else if (percentage >= 90) {
        printf("Grade: A+\n");
    } else if (percentage >= 80) {
        printf("Grade: A\n");
    } else if (percentage >= 70) {
        printf("Grade: B\n");
    } else if (percentage >= 60) {
        printf("Grade: C\n");
    } else if (percentage >= 40) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}
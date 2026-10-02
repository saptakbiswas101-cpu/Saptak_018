//this code is for grade calculation
#include <stdio.h>

int main() {
    float grade;
    printf("Enter the grade: ");
    scanf("%f", &grade);

    if (grade >= 90) {
        printf("Grade: A\n");
    } else if (grade >= 80) {
        printf("Grade: B\n");
    } else if (grade >= 70) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }
    if (grade < 0 || grade > 100) {
        printf("Invalid grade entered.\n");
    }

    return 0;
}
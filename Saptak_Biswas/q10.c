// this code is to calculate the area of a triangle and check whether the triangle is valid or not
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if the triangle is valid
    // yaha bhi thoda help liya thaa
    if (a + b > c && a + c > b && b + c > a) {
        // Calculate the semi-perimeter
        s = (a + b + c) / 2;

        // Calculate the area using Heron's formula
        // formula tu sai loisilu abar knke put kribo lgibo :)
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("The area of the triangle is: %.2f\n", area);
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
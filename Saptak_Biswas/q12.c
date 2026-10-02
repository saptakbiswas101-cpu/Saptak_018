// this is to show basic operators like addition, subtraction, multiplication, division and modulus of two numbers
#include <stdio.h>

int main()
{
    int a, b, sum, diff, prod, quot, rem;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    sum = a + b;
    diff = a - b;
    prod = a * b;
    quot = a / b;
    rem = a % b;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    printf("Quotient: %d\n", quot);
    printf("Remainder: %d\n", rem);
    
    return 0;
}
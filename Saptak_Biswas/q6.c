// this code is to show the sum of even numbers from 1 to n
// n is a number entered by the user
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%2==0)
    {
    for (int i = 2; i <= n; i+=2) {
        sum+=i;
    }
    printf("The sum of even numbers from 1 to %d is %d\n", n, sum);}
    
    else
    {
        printf("The number is not even\n");
    }
    return 0;
}

// this code is to calculate the sum of all odd numbers from 1 to n
#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum += i;
        }
    }
    printf("The sum of all odd numbers from 1 to %d is: %d\n",n,sum);
    return 0;
}
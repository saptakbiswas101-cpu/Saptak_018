//this is for calculating simple interest
#include <stdio.h>
int main()
{
    float p,r,t,si;
    printf("Enter the principal amount: ");
    scanf("%f",&p);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    printf("Enter the time in years: ");
     /* we can change the time in months or days even in weeks but
    we have to convert it into years for calculating simple interest */
     scanf("%f",&t);
    si=(p*r*t)/100;
    printf("The simple interest is: %.2f\n",si);
    return 0;
}
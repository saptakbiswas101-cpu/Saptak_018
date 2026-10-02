// in this code we compare three numbers and write the largest and smallest number
#include <stdio.h>
int main()
{
    int a,b,c; /* we can also declare the numbers as float or double 
                but we have to change the format specifier in printf and scanf accordingly */
    
     printf("Enter the number a:");
    scanf("%d",&a);
    printf("Enter the number b:");
    scanf("%d",&b);
    printf("Enter the number c:");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("The largest number is %d \n",a);
    
    }
    else if(b>a && b>c)
    {
        printf("The largest number is %d \n",b);
    }
    else
    {
        printf("The largest number is %d \n",c);
    }
    if(a<b && a<c)
    {
        printf("The smallest number is %d \n",a);
    
    }
    else if(b<a && b<c)
    {
        printf("The smallest number is %d \n",b);
    }
    else
    {
        printf("The smallest number is %d \n",c);
    }
    return 0;
}
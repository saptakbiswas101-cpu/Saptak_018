#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number a:");
    scanf("%d",&a);
    printf("Enter the number b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a becomes %d \n",a);
    printf("After swapping b becomes %d \n",b);
    return 0;
}
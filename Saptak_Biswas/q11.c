// this code is to calculate the area,perimeter and check whether the rectangle is valid or not using these two formulas
#include <stdio.h>
#include <math.h>
// first we will calculate the area and perimeter of the rectangle using the formulas
int main()
{
    float length,width,Area,Perimeter;
    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);
    printf("Enter the width of the rectangle: ");
    scanf("%f",&width);
    Area = length * width;
    Perimeter = 2 * (length + width);
    
    printf("Area of the rectangle: %.2f\n", Area);

    printf("Perimeter of the rectangle: %.2f\n", Perimeter);


    if(Perimeter*Perimeter-16*Area>0) /* the condition for a valid rectangle is that the square of perimeter
                                         is greater than or equal to 16 times the area */
    {
        printf("The rectangle is valid and it is a non square rectangle.\n");
    }
    else if(Perimeter*Perimeter-16*Area==0)
    {
        printf("The rectangle is valid and it is a square rectangle.\n");
    }
    else
    {
        printf("The rectangle is not valid.\n");
    }
    return 0;
}
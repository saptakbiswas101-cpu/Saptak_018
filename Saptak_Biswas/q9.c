// this code is to calculate both area and circumference of a circle
#include <stdio.h>
int main()
{
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    area = 3.14159 * radius * radius;
    circumference = 2 * 3.14159 * radius; /* we can also use diameter
                                           then the formula will be circumference = 3.14159 * diameter  */
    
    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);
    
    return 0;
}
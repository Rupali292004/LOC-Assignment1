#include <stdio.h>
int main()
{
    float r;
    printf("Enter the radius: \n");
    scanf("%f", &r);
    const float pi = 3.14;

    printf("the diameter is %f \n", 2 * r);
    printf("the circumference is %f \n", 2 * pi * r);
    printf("The area is %f.\n", pi * r * r);
}
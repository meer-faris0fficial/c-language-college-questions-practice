#include <stdio.h>

float areaCircle(float r)
{
    float pi = 22.0/7.0;
    float area = pi * r * r;
    return area;
}

int main()
{
    printf("Welcome to the circular area calculator\n");
    float radius = 0.0;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = areaCircle(radius);
    printf("The area of the circle is: %.2f", area);

    return 0; 
}

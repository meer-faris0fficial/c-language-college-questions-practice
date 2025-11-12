// Debugging of the task 1

#include <stdio.h>

float areaCircle(float r)
{
    float pi = 22.0/7.0;
    printf("Inside the function call the value of the radius is: %f\n", r);
    float area = pi * r * r;
    return area;
}

int main()
{
    printf("Welcome to the circular area calculator\n");
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Before the function call for the debugging\n");
    float area = areaCircle(radius);
    printf("The area of the circle is: %.2f\n", area);
    printf("After the function call");

    return 0; 
}


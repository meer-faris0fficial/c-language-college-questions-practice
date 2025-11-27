#include <stdio.h>
#define PI 3.4161

int main()
{
    int radius = 0;
    printf("Enter the radius: ");
    scanf("%d", &radius);

    int area = PI * radius*radius;
    printf("The area of the circle is: %d", area);

    return 0;
}

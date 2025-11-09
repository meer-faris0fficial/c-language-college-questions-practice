#include <stdio.h>

int main()
{
    printf("Welcome to the rectangular perimeter calculator.\n");
    
    int length = 0, width = 0;
    
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    
    int perimeter = 2 * (length + width);
    printf("The perimeter of the rectangle is: %d\n", perimeter);

    int area = length * width;
    printf("The area of the rectangle is: %d", area);

    return 0;
}

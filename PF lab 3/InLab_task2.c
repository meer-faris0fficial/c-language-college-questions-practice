#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Welcome to quadrant checker\n");

    printf("Enter the x coordinates: ");
    scanf("%d", &x);
    printf("Enter the y coordinates: ");
    scanf("%d", &y);

    if (x == 0 || y == 0){
        printf("The point are on coordinate axis");
    }else if (x > 0 && y > 0){
        printf("The points are in first quadrant");
    } else if (x < 0 && y > 0 )
    {
        printf("The points are in second quadrant");
    } else if (x < 0 && y < 0)
    {
        printf("The points are in third quadrant");
    } else if (x > 0 && y <0)
    {
        printf("The points are in the fourth quadrant");
    }else{
        printf("Invalid input");
    }
    
    return 0;
}

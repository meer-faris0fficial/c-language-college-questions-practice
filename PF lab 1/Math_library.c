#include <stdio.h>
#include <math.h>

int main(void)
{
    int x1, x2, y1, y2; 

    printf("Welcome to the distance calculator between two points\n");
    printf("Enter the value of x1: ");
    scanf("%d", &x1);
    printf("Enter the value of y1: ");
    scanf("%d", &y1);
    printf("Enter the value of x2: ");
    scanf("%d", &x2);
    printf("Enter the value of y2: ");
    scanf("%d", &y2);

    int x_values = x2 - x1;
    double x_square = pow(x_values, 2);
    int y_values = y2 - y1;
    double y_aquares = pow(y_values, 2);
    double final_values = x_square + y_aquares;
    double root_final = sqrt(final_values);

    printf("\nThe distance between (%d, %d) and (%d, %d) is: %.2f", x1, y1, x2, y2, root_final);

    return 0;
}

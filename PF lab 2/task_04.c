#include <stdio.h>
#include <math.h>

int main()
{
    printf("Welcome to the distance calculator between two points\n");

    double x1, x2, y1, y2;

    printf("Enter the value of X1: ");
    scanf("%lf", &x1);
    printf("Enter the value of Y1: ");
    scanf("%lf", &y1);
    printf("Enter the value of X2: ");
    scanf("%lf", &x2);
    printf("Enter the value of Y2: ");
    scanf("%lf", &y2);

    double power_x = pow((x2 - x1), 2);
    double power_y = pow((y2 - y1), 2);

    double root_ans = sqrt(power_x + power_y);

    printf("\nThe distace between (%f,%f) and (%f,%f) is: %f", x1, y1, x2, y2, root_ans);

    return 0;
}

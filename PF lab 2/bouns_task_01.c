#include <stdio.h>
#include <math.h>

int main()
{
    printf("Welcome to the algebric calculations.\n");

    double a = 10.0, b = 5.0, c = 15.0, d = 20.0, theta = 45.0;
    double pi = 22.0/7.0;
    double angle = theta * (pi/180.0);

    double sin_1 = a/b * (sin(angle));
    double sin_power = pow(sin_1, (a/(b*b)));

    double cos_1 = b/a * (cos(angle));
    double cos_power = pow(cos_1, (1.0 /(a+b)));

    double tan_1 = (c * tan(angle)) - (d/c);
    
    double final_answer = sqrt(sin_power + cos_power) / tan_1;

    printf("The answer of the algebric calculations is: %f", final_answer);

    return 0;
}

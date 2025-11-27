#include <stdio.h>
#include <math.h>

int main() 
{
    double a = 10.0, b = 5.0, c = 15.0, d = 20.0, theta = 45.0;
    double pi = 22.0/7.0;
    double ra_angle = theta * (pi/180.0);

    double sin_1 = pow(a/b * (sin(ra_angle)), a/(b*b));
    double cos_1 = pow(b/a * (cos(ra_angle)), 1.0/(a+b));
    double tan_1 = c * tan(ra_angle) - (d/c);

    double sq_root = sqrt(sin_1 + cos_1);
    double answer = sq_root/tan_1;
    
    printf("The answer of the given equation is: %lf", answer);
    
    return 0;
}

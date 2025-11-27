#include <stdio.h>

int main()
{
    double num = 0;
    int point = 0;
    printf("Welcome to the eular's number value finder\n");
    printf("Enter the number of terms to use (e.g., 10, 20): ");
    scanf("%lf", &num);
    printf("Enter the decimal upto which you want to print: ");
    scanf("%d", &point);

    double n = 1;
    double sum = 1;
    while (n <= num)
    {
        double m = 1;
        double factorial = 1;
        while (m <= n)
        {
            factorial *= m;
            m++;
        }
        sum += 1 / factorial;
        n++;
    }
    printf("The value of the Eular's number is: %.*lf", point, sum);
    
    return 0;
}

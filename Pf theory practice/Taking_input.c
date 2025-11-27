#include <stdio.h>

int main()
{
    float number = 0.0;
    // for taking the float input
    printf("Please enter the float number: ");
    scanf("%f", &number);
    printf("Your number is %f", number);

    // for taking the double input
    double number2 = 0.0;
    printf("\nPlease enter the number upto many decimal places: ");
    scanf("%lf", &number2); // %lf is use to take the input of the double
    printf("The output of the double upto your wishes is %.10f", number2);
    return 0;
}

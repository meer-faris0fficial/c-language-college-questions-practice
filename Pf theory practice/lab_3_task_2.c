#include <stdio.h>

int main(void)
{
    float age;

    printf("Enter your age: ");
    scanf("%f", &age);

    if ( age >= 18.0 )
    {
        printf("You are elligible for driving\n");
    }
    else
    {
        printf("You are not eligible for not driving");
    }

    return 0;
}

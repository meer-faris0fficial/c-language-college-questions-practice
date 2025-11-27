#include <stdio.h>

int main(void)
{
    int year;
    
    printf("Welcome to the leap year calculator.\n");
    printf("Enter the year you want to examine: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("The year is a leap year.");
    }
    else
    {
        printf("The year is not leap year");
    }

    return 0;
}

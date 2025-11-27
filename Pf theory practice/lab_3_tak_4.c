#include <stdio.h>

int main(void)
{
    printf("Welcome to the day finder\n");

    int day;
    printf("Enter the number of the day you want to find: ");
    scanf("%d", &day);

    if (day == 1){
        printf("The day is Monday");
    }else if (day == 2)
    {
        printf("The day is Tuesday");
    }else if (day == 3)
    {
        printf("The day is Wednesday");
    }else if (day == 4)
    {
        printf("The day is Thursday");
    }else if (day == 5)
    {
        printf("The day is Friday");
    }else if (day == 6)
    {
        printf("The day is Saturday");
    }else if (day == 7)
    {
        printf("The day is Sunday");
    }else
    {
        printf("Invalid Input");
    }
    
    return 0;
}

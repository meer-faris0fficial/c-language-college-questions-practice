#include <stdio.h>

int main(void)
{
    int year;
    printf("Enter the year you want to check: ");
    scanf("%d", &year);

    if ((year % 4 == 0)){
        if (year % 100 == 0){
            if (year % 400 == 0)
            {
                printf("The year is a leap year");
            }
            else
            {
                printf("The year is not a leap year\n");            
            }
        }
        else{
            printf("The year is a leap yaer.");
        }        
    }
    else
    {
        printf("The year is not a leap year");
    }

    return 0;
}

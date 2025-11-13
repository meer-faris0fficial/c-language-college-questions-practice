#include <stdio.h>

int main()
{
    int num = 0;
    printf("Welcome to the number reverse calculator\n");
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num >= 0 )
    {
    int reverse = 0;
    while (num > 0)
    {
        int mod = num % 10;
        reverse = reverse * 10 + mod;
        num /= 10;
    }
    printf("The reverse of the number is: %d", reverse);
    } 
    else{
        printf("Enter the valid input");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    long long int num = 0;
    printf("Welcome to the even and odd sum of digits of a number\n");
    printf("Enter the number: ");
    scanf("%lld", &num);
    
    if (num < 0)
    {
        printf("Invalid Input");
    }

    else
    {
    int noOfDigits = 0;
    int evenSum = 0;
    int oddSum = 0;
    while (num > 0)
    {
        int mod = num % 10;
        if (mod % 2 == 0)
        {
            evenSum += mod;
        }else {
            oddSum += mod;
        }
        
        num /= 10;
        noOfDigits += 1;
    }

    printf("Total no of digits in your entered number is: %d\n", noOfDigits);
    printf("The sum of even digits is: %d\n", evenSum);
    printf("The sum of odd digits is: %d\n", oddSum);
}
    return 0;
}

#include <stdio.h>

int main()
{
    int num = 0;
    int first, second, third, fourth;
    int temp1, temp2;
    int num_copy2 = 0;

    printf("Welcome to the digit encryption calculator\n");
    printf("Enter the four digits code: ");
    scanf("%d", &num);
    num_copy2 = num;

    while (num < 1000 || num > 9999)
    {
        printf("Enter the valid input: ");
        scanf("%d", &num);
        num_copy2 = num;
    }

    //encryption occurs in this step
    int reverse_digit = 0;
    while (num_copy2 > 0)
    {
        int mod = ((num_copy2 % 10) + 7) % 10;
        reverse_digit = reverse_digit* 10 + mod;
        num_copy2 /= 10;
    }

    // separate the digits
    first = reverse_digit % 10;
    reverse_digit /= 10;
    second = reverse_digit % 10;
    reverse_digit /= 10;
    third = reverse_digit % 10;
    reverse_digit /= 10;
    fourth = reverse_digit % 10;

    // swaping the numbers
    temp1 = first;
    first = third;
    third = temp1;

    temp2 = second;
    second = fourth;
    fourth = temp2;

    printf("The encrypted number is: %d%d%d%d", first, second, third, fourth);
    
    return 0;
}

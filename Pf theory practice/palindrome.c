#include <stdio.h>

int main()
{
    int num;
    int num_copy;
    printf("Welcome to the palindrome checker\n");
    printf("Enter the number you want to check: ");
    scanf("%d", &num);
    num_copy = num;

    int temp = 0;
    while (num > 0)
    {
        temp = temp * 10 + (num % 10);
        num /= 10;
    }

    if (temp == num_copy)
    {
        printf("The number is palindrome");
    } else{
        printf("The number is not palindrome");
    }

    return 0;
}

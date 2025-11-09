#include <stdio.h>

int main()
{
    printf("Welcome to the swaping number system\n");

    int first_number = 0, second_number = 0, third_number = 0;

    printf("Enter the first number: ");
    scanf("%d", &first_number);
    printf("Enter the second number: ");
    scanf("%d", &second_number);

    third_number = second_number;
    second_number = first_number;

    printf("Your first number is: %d\n", third_number);
    printf("Your second number is: %d", second_number);

    return 0;
}

#include <stdio.h>

int main()
{
    int num;
    printf("Welcome to the digit separator.\n");

    printf("Enter the five digit number: ");
    scanf("%d", &num);

    int first_digit = num % 10;
    int remain_first = num / 10;
    int second_digit = remain_first % 10;
    int remain_second = remain_first / 10;
    int third_digit = remain_second % 10;
    int remain_third = remain_second / 10;
    int fourth_digit = remain_third % 10;
    int remain_fourth = remain_third / 10;
    int fifth_digit = remain_fourth % 10;

    printf("%d   %d   %d   %d   %d\n", fifth_digit, fourth_digit, third_digit, second_digit, first_digit);

    return 0;
}

#include <stdio.h>

int main()
{
    int num = 0;
    printf("Welcome to the square calculator.\n");
    printf("Enter the number: ");
    scanf("%d", &num);

    int square = num * num;
    printf("The square of the number is: %d", square);

    return 0;
}

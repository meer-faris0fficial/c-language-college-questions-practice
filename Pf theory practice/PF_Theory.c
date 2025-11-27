// %[^\n] means “read everything until a newline.” But — if the very first character in
// the buffer is already a newline (\n), it will stop immediately and look like it skipped input.

#include <stdio.h>

int main()
{
    // char name[100];
    char str[100];
    printf("Enter your name: ");
    // " %[^\n]" is use to ignore the spaces and the new line and extra space it read everything until
    // enter button hits
    scanf("%[^\n]", str);
    // scanf(" %[^\n]", name); 
    printf("Good Afternoon, %s", str);
    int num = 0;
    printf("\nPlease enter the number: ");
    scanf("%d", &num);
    printf("Thanks fo entering the number\n");
    printf("Your number is: %d", num);

    printf("\nWelcome to the sum calculator");
    int num1 = 0;
    int num2 = 0;
    printf("\nPlease enter the first number: ");
    scanf("%d", &num1);
    printf("Now enter the second number: ");
    scanf("%d", &num2);
    int sum = num1 + num2;
    printf("\nSum of number 1(%d) and number 2(%d) is: %d", num1, num2, sum);
    return 0;
}


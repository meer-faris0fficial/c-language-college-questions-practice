#include <stdio.h>

int main(void)
{
    int a, b;
    char op;

    printf("Welcome to the mathematical calculator.\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the mathematical operation (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("The addition of two numbers is: %d\n", a + b);
        break;
    case '-':
        printf("The subtraction of two numbers is: %d\n", a - b);
        break;
    case '*':
        printf("The multiplication of two numbers is: %d\n", a * b);
        break;
    case '/':
        if (b != 0)
            printf("The division of two numbers is: %.2f\n", (float)a/b);
        else
            printf("Error: Division by zero!\n");
        break;
    case '%':
        if (b != 0)
            printf("The remainder is: %d", a % b);
        else
            printf("Error: Divion by zero\n");
        break;
    default:
        printf("Invalid input\n");
        break;
    }
    return 0;
}

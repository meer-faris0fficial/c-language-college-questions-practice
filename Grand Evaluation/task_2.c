#include <stdio.h>

int main()
{
    char order[100];
    int a, b = 0;
    int c = 0;
    printf("Welcome to our caffee\n");
    printf("Our menu include: \n'Latte', 'Cappicino', 'Black coffe', 'Cold coffe' \n");

    do
    {
        printf("What would you like to order (Enter without spacing and 1 item): ");
        scanf("%s", &order);      // %[^\n] for the spacing
        printf("How many cups you want to order: ");
        scanf("%d", &a);
        printf("Enter 555 to end the order: ");
        scanf("%d", &c);
        printf("You have order %d cups of %s\n", a, order);

    } while (c != 555);

    return 0;
}

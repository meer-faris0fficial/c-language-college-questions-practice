#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("Welcome to the swaping number system.\n");
    printf("Please enter the first number a: ");
    scanf("%d", &a);
    printf("Now enter the second number b: ");
    scanf("%d", &b);
    c = b;
    b = a;
    printf("Your first number a is: %d\n", c);
    printf("Your second number b is: %d\n", b);
    return 0;
}

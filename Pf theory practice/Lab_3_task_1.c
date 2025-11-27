#include <stdio.h>

int main(void)
{
    int a, b, c;
    int maximum;

    printf("Welcome to the maximum number calculator.\n");
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    maximum = a;
    if (b > maximum) {maximum = b;}
    if (c > maximum) {maximum = c;}

    printf("The maximum number is %d", maximum);

    return 0;
}

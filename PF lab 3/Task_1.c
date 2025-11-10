#include <stdio.h>

int main(void)
{
    int a, b, c;
    int maximum;

    printf("Welcome to the maximum integer finder.\n");
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    maximum = a;
    if (b > maximum) {maximum = b;}
    if (c > maximum) {maximum = c;}

    printf("The maximum integer is: %d", maximum);

    return 0;
}

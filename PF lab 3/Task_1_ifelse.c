#include <stdio.h>

int main(void)
{
    int a, b, c;
    int maximum;

    printf("Welcome to the maximum integer finder.\n");
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("The greatest integer is: %d", a);
    }else if (b >= a && b >= c)
    {
        printf("The greatest integer is: %d", b);
    } else 
    {
        printf("The greatest integer is: %d", c);
    }

    return 0;    
}    

#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Welcome to the calculator\n");
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("The sum of the numbers is: %d\n", a + b + c);
    printf("The average of the numbers is: %d\n", (a + b + c)/3);
    printf("The product of the numbers is: %d\n", a * b * c);

    if (a >= b && a >= c)
    {
        printf("%d is the greatest number.\n", a);
    } else if (b >= a && b >= c)
    {
        printf("%d is the greatest number.\n", b);
    } else
    {
        printf("%d is the greatest number\n", c);
    }

     if (a <= b && a <= c)
    {
        printf("%d is the smallest number.\n", a);
    } else if (b <= a && b <= c)
    {
        printf("%d is the smallest number.\n", b);
    } else
    {
        printf("%d is the smallest number\n", c);
    }
    
    return 0;
}

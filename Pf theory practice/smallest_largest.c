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

    if (a > b && a > c){printf("%d is the greatest number.\n", a);}
    if (b > a && b > c){printf("%d is the greatest number.\n", b);}
    if (c > a && c > b){printf("%d is the greatest number.\n", c);}
    if (a == b && a > c){printf("%d is the greatest number.\n", a);}
    if (a == c && a > b){printf("%d is the greatest number.\n", a);}
    if (b == c && b > a){printf("%d is the greatest number.\n", b);}
    if (a == b && b == c){printf("%d is the greatest number.\n", a);}
    
    if (a < b && a < c){printf("%d is the smallest number.\n", a);}
    if (b < a && b < c){printf("%d is the smallest number.\n", b);}
    if (c < a && c < b){printf("%d is the smallest number.\n", c);}
    if (a == b && a < c){printf("%d is the smallest number.\n", a);}
    if (a == c && a < b){printf("%d is the smallest number.\n", a);}
    if (b == c && b < a){printf("%d is the smallest number.\n", b);}
    if (a == b && b == c){printf("%d is the smallest number.\n", a);}
    
    return 0;
}

#include <stdio.h>

int main()
{
    int base = 0;
    int exp = 0;

    printf("Welcome to the power calculator\n");
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exp);

    if (exp == 0){
        printf("The answer is 1");
    } else if (exp < 0)
    {
        printf("Enter the positive exponent");
    } else if (exp == 2)
    {
        int c = base * base;/* code */
        printf("The square of the number is: %d", c);
    } else if (exp == 3)
    {
       int d = base * base * base;/* code */
        printf("The cube of the number is: %d", d);
    } else if (exp == 4)
    {
       int e = base * base * base * base;/* code */
        printf("The cube of the number is: %d", e);
    } else
    {
        printf("We have to use math function for the larger calculations");
    }
    
    return 0;    
}

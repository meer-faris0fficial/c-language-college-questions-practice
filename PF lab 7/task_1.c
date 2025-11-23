#include <stdio.h>

int power(int base, int exp)
{
    if (exp == 0){
        return 1;
    }else{
        return base * power(base, exp - 1);
    }
}

int main()
{
    int base = 0, exp = 0;
    printf("Welcome to the power calculator of the digit\n");
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exp);

    int result = power(base, exp);

    printf("The answer after the power calculation is: %d", result);

    return 0;
}

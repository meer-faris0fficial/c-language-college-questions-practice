#include <stdio.h>

int factorial(int n)
{
    if (n < 0) {
        printf("The factorial of negative number is undefined\n");
        return 0;
    }
    if (n == 0 || n == 1){
        return 1;
    }
    int fact = 1;
    for (int i = 1; i <= n ; i++){
        fact *= i;
    }
    if (n > 0){
        return fact;
    }
}

int main()
{
    printf("Welcome to the factorial calculator\n");
    int num = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    int factor = factorial(num);
    if (num > 0){
        printf("The factorial of the number is: %d", factor);
    }
    return 0;
}

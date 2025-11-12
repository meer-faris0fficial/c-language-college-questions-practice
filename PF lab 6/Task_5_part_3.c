#include <stdio.h>

// long double factorial(int n)  for the greater numbers
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int fact = 1;
    for (int i = 1; i <= n ; i++)
    {
        fact *= i;
        printf("Inside the funciton call the factorial of %d is: %d\n", i, fact); // debugging step
    }
    
    return fact;
}

int main()
{
    printf("Welcome to the factorial calculator\n");
    int num = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("The factorial of negative number is undefined");
    }

    printf("Before the funcion call\n"); // debugging step
    int factor = factorial(num);
    if (num > 0){
        // long double factor = factorial(num);
        printf("The factorial of %d is: %d\n", num, factor);
    }
        // printf("The factorial of the number is: %Le", factor);
        printf("After the function call"); // debugging step

    return 0;
}

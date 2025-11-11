// factorial 

#include <stdio.h>

int main()
{
    int num = 0;
    long long factorial = 1;
    printf("Welcome to the factorial finder.\n");
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("The factorial of the number is: 1\n");
    }else if (num > 0)
    {
        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }
        printf("The factorial of the number is: %llu", factorial);

    }else{
        printf("Enter the valid input");
    }
    
    return 0;
}

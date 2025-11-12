#include <stdio.h>

int addition(int a, int b){
    return a + b;
}
int subtraction(int a, int b){
    return a - b;
}
int multiplication(int a, int b){
    return a * b;
}
float division(int a, int b){
    return (float) a/b;
}

int main()
{
    int first, second;
    int num = 0;
    printf("Welcome to the basic calculator\n");
    printf("Enter the first number: ");
    scanf("%d", &first);
    printf("Enter the second number: ");
    scanf("%d", &second);
    printf("Which operation do you want to perform\n"
            "1 for addition\n"
            "2 for subtraction\n"
            "3 for the multiplication\n"
            "4 for the division\n"
            "Enter the number: ");
    scanf("%d", &num);

    if (num == 1){
        int add = addition(first, second);
        printf("The addition of the number is: %d", add);
    }else if (num == 2)
    {
        int sub = subtraction(first, second);
        printf("The subtraction of the two number is: %d", sub);
    }else if (num == 3)
    {
        int mult = multiplication(first, second);
        printf("The multiplication of the two number is: %d", mult);
    }else if (num == 4)
    {
        float divide = division(first, second);
        printf("The division of the two number is: %.2f", divide);
    }else
    {
        printf("Invalid input!");
    }
    
    return 0;
}

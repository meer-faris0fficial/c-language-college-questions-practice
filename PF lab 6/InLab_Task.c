#include <stdio.h>

int HCF(int num_1, int num_2)
{
    int temp = 1;
    while (temp != 0)
    {
        temp = num_1 % num_2;
        num_1 = num_2;
        num_2 = temp;
        // printf("num_1 = %d\n", num_1);
        // printf("num_2 = %d\n", num_2);
    }
    
    if (temp == 0)
    {
        return num_1;
    }
}

int main()
{
    int num1 = 0, num2 = 0;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    int hcf = HCF(num1, num2);
    printf("The hcf of the number is: %d", hcf);

    return 0;
}

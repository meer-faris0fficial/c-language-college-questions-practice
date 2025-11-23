#include <stdio.h>

int GCD(int num_1, int num_2)
{
    if (num_2 == 0){
        return num_1;
    }else{
        return GCD(num_2, num_1 % num_2); 
    }
}

int main()
{
    int num_1 = 0, num_2 = 0;
    printf("welcome to the GCD calculator of two numbers\n");
    printf("Enter the first number: ");
    scanf("%d", &num_1);
    printf("Enter the second number: ");
    scanf("%d", &num_2);

    int gcd = GCD(num_1, num_2);
    printf("The GCD of the numbers is: %d", gcd);

    return 0;
}

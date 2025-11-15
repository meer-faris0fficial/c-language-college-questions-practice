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
    int num_1, num_2;
    printf("Welcome to the gcd finder\n");
    printf("Enter the first element: ");
    scanf("%d", &num_1);
    printf("Enter the second element: ");
    scanf("%d", &num_2);

    int gcd = GCD(num_1, num_2);
    printf("The gcd of the two elements is: %d", gcd);

    return 0;
}

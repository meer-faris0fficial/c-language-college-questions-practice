#include <stdio.h>
#include <stdbool.h> 

int LCM(int num_1, int num_2){
    int i = 1;
    while (true) {
        int factor = num_1 * i;
        if (factor % num_2 == 0)
        {
            return factor;
        }
        i++;
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

    int lcm = LCM(num_1, num_2);
    printf("The LCM of the two elements is: %d", lcm);

    return 0;
}

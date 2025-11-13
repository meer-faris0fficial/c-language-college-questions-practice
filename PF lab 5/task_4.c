#include <stdio.h>

int main(void)
{
    int num = 0;
    printf("Welcome to the smallest no calculator\n");
    printf("Enter the no of numbers you want to compare: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Invalid number of values.\n");
        return 0;
    }

    int smallest = 0;
    int temp = 0;
    int i = 0;

    smallest = num;
    while (i < num)
    {
        printf("Enter the number: ");
        scanf("%d", &temp);

        // if (smallest == 0) smallest = temp;
        if (temp < smallest) smallest = temp;  
        
        i++;      
    }
    
    printf("The smallest no is: %d", smallest);
    return 0;
}

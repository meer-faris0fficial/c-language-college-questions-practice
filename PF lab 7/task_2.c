#include <stdio.h>

int SUM(int num)
{
    if (num == 1){
        return 1;
    }else{
        return num + SUM(num - 1);
    }
    
}

int main()
{
    int num = 0;
    printf("Welcome to the n number sum calculator\n");
    printf("Enter the number till you want the sum of the numbers: ");
    scanf("%d", &num);

    int sum = SUM(num);
    printf("The sum of the numbers is: %d", sum);

    return 0;
}

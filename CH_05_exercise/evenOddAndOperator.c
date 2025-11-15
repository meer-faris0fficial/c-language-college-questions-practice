#include <stdio.h>

int main(void)
{
    int num = 0;
    printf("Welcome to the even odd finder\n");
    printf("Enter the number: ");
    scanf("%d", &num);

    if ((num & 1) == 1){
        printf("The number is odd");
    }else{
        printf("The number is even");
    }
    
    return 0;
}

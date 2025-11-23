#include <stdio.h>

int Reverse(int num, int reverse)
{
    if (num == 0){
        return reverse;
    }else{
        return Reverse(num/10, reverse * 10 + num % 10);
    }
    
}

int main()
{
    int num = 0;
    printf("Welcome to the digit reversal center\n");;
    printf("Enter the digit you want to reverse: ");
    scanf("%d", &num);

    int reverse = Reverse(num, 0);
    printf("The reverse of the digit is: %d", reverse);

    return 0;
}

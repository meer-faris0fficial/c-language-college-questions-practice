#include <stdio.h>

int Palindrome(int num, int reverse){
    if (num == 0){
        return reverse;
    }else{
        return Palindrome(num/10, reverse * 10 + num % 10);
    }
}

int main()
{
    int num_1;
    printf("Welcome to the palindrome number finder\n");
    printf("Enter the first element: ");
    scanf("%d", &num_1);

    int palindrome = Palindrome(num_1, 0);
    if (num_1 == palindrome){
        printf("The number is palindrome");
    }else{
        printf("The number is not palindrome");
    }
    

    return 0;
}

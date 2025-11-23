#include <stdio.h>

void printReverse(int n)
{
    if (n == 0)
        return;

    printf("%d", n % 10); 
    printReverse(n / 10); 
}

int main() {
    int num = 0;
    printf("Welcome to the digit reversal calculator\n");
    printf("Enter the number you want to reverse: ");
    scanf("%d", &num);
    
    printReverse(num);

    return 0;
}

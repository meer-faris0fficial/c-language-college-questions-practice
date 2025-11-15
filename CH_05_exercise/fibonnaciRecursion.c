#include <stdio.h>

long long Fibonacci(int num) {
    if (num == 1){
        return 0; 
    }     
    if (num == 2){
        return 1; 
    }
    return Fibonacci(num - 1) + Fibonacci(num - 2);
}

int main() {
    int num;
    printf("Enter the number of fibonacci elements that you want to print: ");
    scanf("%d", &num);

    printf("The Fibonacci series is:\n");
    for (int i = 1; i <= num; i++) {
        printf("%lld ", Fibonacci(i));
    }

    return 0;
}

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num = 29;
    bool isPrime = true;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    printf("%d is %s\n", num, isPrime ? "Prime" : "Not Prime");

}

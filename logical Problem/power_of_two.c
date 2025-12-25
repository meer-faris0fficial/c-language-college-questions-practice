// Converting any number to the power of the two
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int first = 1;
    int power = 1;   
    int i = 0;

    while (n > 0) {
        if (n & 1) {  
            if (!first) {
                printf("+");
            }
            printf("%d", power);
            first = 0;
        }
        n >>= 1;      
        power <<= 1;  
        i++;
    }

    printf("\n");
    return 0;
}


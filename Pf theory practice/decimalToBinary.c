#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Binary value: ");

    unsigned int mask = 1u << 31; 
    int started = 0;

    for (; mask > 0; mask >>= 1)
    {
        if (n & mask) {
            printf("1");
            started = 1;
        } else if (started) {
            printf("0");
        }
    }

    if (!started) printf("0");
    printf("\n");

    return 0;
}

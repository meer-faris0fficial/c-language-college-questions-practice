#include <stdio.h>

int main() 
{
    int i, j;

    for (i = 1; i <= 2; i++) 
    {
        for (j = 1; j <= 5; j++) 
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n"); 
    }

    return 0;
}

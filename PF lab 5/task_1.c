#include <stdio.h>

int main()
{
    printf("N\tN*10\tN*100\tN*1000\n");

    int i = 1;
    while(i <= 10)
        {
            printf("%d\t%d\t%d\t%d", i, i*10, i*100, i*1000);
            printf("\n");
            i++;
        }


    return 0;
}

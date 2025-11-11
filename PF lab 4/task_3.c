#include <stdio.h>

int main()
{
    printf("Welcome to the loop\n");
    for (int i = 0; i <= 50; i++)
    {
        if (i % 4 == 0)
        {
            continue;
        }if (i > 40)
        {
            break;
        }
        printf("%d ", i);
    }
    
    return 0;
}

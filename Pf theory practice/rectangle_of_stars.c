#include <stdio.h>

int main()
{
    int rows = 4, coloumns = 5;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < coloumns; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
    
}

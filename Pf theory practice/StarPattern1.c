#include <stdio.h>

int main()
{
    int rows = 3;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    rows = rows - 1;
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 0; j < i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

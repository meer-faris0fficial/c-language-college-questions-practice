#include <stdio.h>

int main(void)
{
    int stars, rows;

    printf("Enter number of stars per line: ");
    if (scanf("%d", &stars) != 1 || stars <= 0) return 1;

    printf("Enter number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) return 1;

    int r = 0;
    while (r < rows)
    {
        int c = 0;

        /* On odd-numbered rows (1-based), print a leading space to offset the row.
           We use r%2: r==0 -> first row (no leading space), r==1 -> second row (leading space), etc. */
        if (r % 2 == 1) putchar(' ');

        while (c < stars)
        {
            putchar('*');
            if (c < stars - 1) putchar(' '); /* space between stars, not after last star */
            c++;
        }

        putchar('\n');
        r++;
    }

    return 0;
}

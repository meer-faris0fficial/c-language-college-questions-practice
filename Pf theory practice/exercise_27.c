#include <stdio.h>

int main()
{
    int a0 = 0, a1 = 1, a2 = 2, a3 = 3, a4 = 4, a5 = 5, a6 = 6, a7 = 7, a8 = 8, a9 = 9, a10 = 10;

    printf(
        "number     square      cube\n"
        "%d         %d          %d  \n"
        "%d         %d          %d  \n" 
        "%d         %d          %d  \n" 
        "%d         %d          %d  \n" 
        "%d         %d         %d  \n" 
        "%d         %d         %d  \n"
        "%d         %d         %d  \n" 
        "%d         %d         %d  \n" 
        "%d         %d         %d  \n" 
        "%d         %d         %d  \n" 
        "%d        %d        %d  \n", 
        a0, a0, a0,
        a1, a1*a1, a1*a1*a1,
        a2, a2*a2, a2*a2*a2, 
        a3, a3*a3, a3*a3*a3,
        a4, a4*a4, a4*a4*a4,
        a5, a5*a5, a5*a5*a5,
        a6, a6*a6, a6*a6*a6,
        a7, a7*a7, a7*a7*a7,
        a8, a8*a8, a8*a8*a8,
        a9, a9*a9, a9*a9*a9,
        a10, a10*a10, a10*a10*a10
        );

    return 0;
}

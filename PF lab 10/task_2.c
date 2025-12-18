#include <stdio.h>

int main()
{
    char a;
    short b;
    int c;
    long d;
    long long e;
    float f;
    double g;
    long double h;

    int arr[20];
    int *ptr = arr;

    printf("The size of int is : %zu bytes\n", sizeof(int));    
    printf("Size of char:        %zu bytes\n", sizeof(a));
    printf("Size of short:       %zu bytes\n", sizeof(b));
    printf("Size of int:         %zu bytes\n", sizeof(c));
    printf("Size of long:        %zu bytes\n", sizeof(d));
    printf("Size of long long:   %zu bytes\n", sizeof(e));
    printf("Size of float:       %zu bytes\n", sizeof(f));
    printf("Size of double:      %zu bytes\n", sizeof(g));
    printf("Size of long double: %zu bytes\n", sizeof(h));

    printf("\nSize of entire int array (20 elements): %zu bytes\n", sizeof(arr));
    printf("Size of int pointer:                   %zu bytes\n", sizeof(ptr));

    return 0;
}

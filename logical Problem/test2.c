#include <stdio.h>

typedef float real_numbers;

int main()
{
    int a[4] = {1,2,3,4};
    int b[8] = {3,4,5,6,7,8,9,1};

    printf("the value of the b is: %d\n", b[a[1+2]+ a[1]]);

    real_numbers x = 2.222;
    printf("the value of the real number is: %f", x);

    return 0;
}

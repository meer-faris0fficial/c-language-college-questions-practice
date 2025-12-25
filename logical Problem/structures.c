#include <stdio.h>

union Value {
    int i;
    double d;
    char arr[30];
};

struct Point {
    union Value x;
    union Value y;
};

struct Point pt;

int main()
{
    pt.x.d = 3.5;  // can store double
    pt.x.i = 3;    // can store int
    union Value a;
    a.d = 20.222;
    a.i = 10;
    printf("The value of the integer is: %d\n", a.i);
    printf("The vlaue of the double is: %lf\n", a.d);

}


// char (*(*x())[])()
//  x: function returning pointer to array[] of
//  pointer to function returning char


#include <stdio.h>

// Step 1: functions that return char
char f1() { return 'A'; }
char f2() { return 'B'; }

// Step 2: pointer to array of pointers to functions
char (*arr[] )() = { f1, f2 };

// Step 3: function returning pointer to array
char (*(*x())[])() {
    return &arr;  // return address of the array
}

int main() {
    char (*(*p)[])() = x();  // get pointer to array

    printf("%c\n", (*p)[0]());  // call first function → 'A'
    printf("%c\n", (*p)[1]());  // call second function → 'B'

    return 0;
}

// char (*(*x[3])())[5] x: array[3] of pointer to function returning pointer to array[5] of char

#include <stdio.h>

// Step 1: Functions returning pointer to array of 5 chars
char (*f1())[5] {
    static char arr1[5] = {'H','e','l','l','o'};
    return &arr1;
}

char (*f2())[5] {
    static char arr2[5] = {'W','o','r','l','d'};
    return &arr2;
}

char (*f3())[5] {
    static char arr3[5] = {'C','L','A','N','!'}; 
    return &arr3;
}

int main() {
    // Step 2: Array of pointers to functions
    char (*(*x[3])())[5] = {f1, f2, f3};

    // Step 3: Access each function through the array and print array elements
    for(int i = 0; i < 3; i++) {
        char (*p)[5] = x[i]();  // call function and get pointer to array
        for(int j = 0; j < 5; j++) {
            printf("%c", (*p)[j]);
        }
        printf("\n");
    }

    return 0;
}


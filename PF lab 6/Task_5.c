#include <stdio.h> 
 
int cube(int num) {  // int is missing inside the function parameter and function return type is void
    printf("Inside function value of the input is: %d\n", num);
    return num * num * num; // that donot return any value
} 
 
int main(void) { 
    int n; 
    printf("Enter number: "); // semicolon is missing syntax error 
    scanf("%d", &n); // & is missing syntax error

    printf("For the debugging before function\n");
    printf("Cube is: %d\n", cube(n)); 
    printf("After the function returns\n");
    return 0; // semicolon was missing syntax error 
} 

#include <stdio.h> 
int main() { 
    int a, b; // here comma was missing between variables 
    printf("Enter first number: "); // here semicolon was missing at the end of the line 
    scanf("%d", &a); // here & and semicolon waere missing at the end of the line   
 
    printf("Enter second number: "); 
    scanf("%d", &b);  // here & and semicolon waere missing at the end of the line
 
    printf("Addition = %d\n", a + b);  // here semicolon was missing at the end of the line
    printf("Subtraction = %d\n", a - b); // here float was used which is incorrect %d must use
    printf("Multiplication = %d\n", a * b); // here semicolon was missing at the end of the line  
    printf("Division = %f\n", (float)a / b); 
 
    return 0; // here 0 was missing 
}  // here the closing bracket was missing

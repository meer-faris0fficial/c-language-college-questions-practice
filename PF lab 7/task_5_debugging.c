#include <stdio.h> 
 
int countDigits(int n) // data type of function parameter was missing
{ 
    if(n == 1) 
        return 1; 
    else 
        return 1 + countDigits(n / 10);  // for the counting digits / by 10 to avoid stack overflow
} 

int main() 
{ 
    int num; 
    printf("Enter a number: "); // semicolon was missing 
    scanf("%d", &num);  // & was missing
 
    int digits = countDigits(num);  // int data type and function parameter was missing 
 
    printf("Total digits are: %d", digits); // semicolon was missing
    
    return 0;
} 

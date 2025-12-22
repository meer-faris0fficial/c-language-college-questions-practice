#include <stdio.h> 
 
void displayMessage() 
{ 
    printf("This is a callback function\n"); // semicolon was missing
} 
 
void executeCallback(void (*callback)())  // function pointer was missing
{ 
    printf("Executing callback...\n"); 
    callback(); // () bracket was missing for the function call
} 
 
int main() 
{ 
    executeCallback(displayMessage); 
    return 0; // zero is peferable 
} 

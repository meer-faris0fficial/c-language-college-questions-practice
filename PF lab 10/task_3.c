#include <stdio.h>
#define SIZE 5 

void correctFunction(int *ptr) 
{ 
    printf("Array size inside a function is: %d\n", sizeof(ptr)/sizeof(ptr[0]));
    // Correct way: size cannot be found using sizeof(ptr)
    printf("Array size inside function = %d \n", SIZE);

    ptr[0] = 100;      // Correct way to modify first element
    ptr = ptr + 3;    // Move pointer to 4th element
    *ptr = 999;       // Modify arr[3]
} 

int main() 
{ 
    int arr[SIZE] = {10, 20, 30, 40, 50}; 
    int *p = arr;               
 
    printf("First value = %d\n", arr[0]); // *arr[0] is wrong it can be written as arr[0] or  *(p + 0)
 
    correctFunction(arr); 

    printf("\nAfter function call:\n");
    for(int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);

    return 0; 
}

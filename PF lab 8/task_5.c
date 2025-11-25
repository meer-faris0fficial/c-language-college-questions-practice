#include <stdio.h> 
int main() { 
    static int arr[] = {5, 2, 9, 1}; // 'A' cannot be placed inside a int array and [] is missing
    int n = sizeof(arr)/sizeof(arr[0]); // algo problems
    int i, j, temp; 
    for(i = 0; i < n - 1; i++) {            
        for(j = 0; j < n - i - 1 ; j++) { // algorithm problem        
            if(arr[j] > arr[j+1]) {      
                temp = arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = temp; 
            } 
        } 
    } 
    printf("Sorted array: "); 
    for(i = 0; i < n; i++) // logical error <=
        printf("%d ", arr[i]); 
    return 0; 
} 

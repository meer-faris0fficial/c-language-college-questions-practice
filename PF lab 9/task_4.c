#include <stdio.h> 
 
int main() { 
    int matrix[3][4] = { // the bracket was missing
        {12, 7, 9, 15}, 
        {8, 14, 6, 10},  // comma was missing 
        {11, 5, 13, 2} 
    }; 
 
    printf("Matrix with maximum of each row highlighted:\n"); 
 
    for(int i = 0; i <= 3; i++) {            
        int max = 0; // semicolon was missing                          
        for(int j = 0; j < 4; j++) {        
            if(matrix[i][j] > max)  // logical error =         
                max = matrix[i][j];   // logical error of +       
        } 
 
        for(int j = 0; j < 4; j++) {  // logical error of <= 5 
            printf("%3d ", matrix[j][i]);      
            if(matrix[i][j] = max)            
                printf("*"); 
            printf("  ");
        } 
        printf("\n"); // semicolon was missing 
    } 
    return 0; 
} 

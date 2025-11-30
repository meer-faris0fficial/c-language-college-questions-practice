#include <stdio.h>

int main()
{
    int rows1, coloumns1, rows2, coloumns2;
    printf("Enter the no of elements of rows of 1st matrix: ");
    scanf("%d", &rows1);
    printf("Enter the no of elements of coloumns of 1st matrix: ");
    scanf("%d", &coloumns1);

    printf("Enter the no of elements of rows of 2nd matrix: ");
    scanf("%d", &rows2);
    printf("Enter the no of elements of coloumn of 2nd matrix: ");
    scanf("%d", &coloumns2);
    
    if (coloumns1 != rows2){
        printf("The multiplication of matrix is not possible\n");
        return 0;
    }

    int arr[rows1][coloumns1];
    for (size_t i = 0; i < rows1; i++){
        for (size_t j = 0; j < coloumns1; j++){
            printf("Enter %d row and %d coloumn element of M1: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }        
    }

    printf("\n");
    int arr2[rows2][coloumns2];
    for (size_t i = 0; i < rows2; i++){
        for (size_t j = 0; j < coloumns2; j++){
            printf("Enter %d row and %d coloumn element of M2: ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }        
    }
    

    int newRow = rows1, newColoumn = coloumns2;
    int newArr[newRow][newColoumn];

    for (size_t i = 0; i < newRow; i++) {
        for (size_t j = 0; j < newColoumn; j++) {

            newArr[i][j] = 0;

            for (size_t k = 0; k < coloumns1; k++) {
                newArr[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }
    printf("\n");

    printf("The Matrix after the multiplication is: \n");

    for (size_t i = 0; i < newRow; i++){
        for (size_t j = 0; j < newColoumn; j++){
            printf(" %3d ", newArr[i][j]);
        } 
        printf("\n");       
    }

    return 0;
}

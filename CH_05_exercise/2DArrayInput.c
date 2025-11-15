#include <stdio.h>

void Array2D()
{
    int rows = 0, coloumns = 0;
    printf("Enter the number of elements of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of elements of coloumns: ");
    scanf("%d", &coloumns);

    int arr[rows][coloumns];
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < coloumns; j++){
            printf("Enter the element of %d row and %d coloumn: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The input in the form of the matrix are as follows: \n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < coloumns; j++){
           printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    Array2D();
}

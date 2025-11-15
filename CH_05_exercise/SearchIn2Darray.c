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

    int noToFind = 0;
    printf("\nEnter the element you want to find in the 2D array: ");
    scanf("%d", &noToFind);

    int find = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < coloumns; j++){
            if (noToFind == arr[i][j]){
                find++;
           }
        }
    }

    printf("The no \"%d\" was found in the 2D array %d times", noToFind, find);

}

int main()
{
    Array2D();
}

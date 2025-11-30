#include <stdio.h>

void input2Darray(int arr[2][2])
{
    printf("Inside the funciton\n");
    printf("Diagonal Elements of 2D array are: \n");
    for (size_t i = 0; i < 2; i++){
        for (size_t j = 0; j < 2; j++){
            if (i == j){
                printf(" %3d ", arr[i][j]);
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }

}

int main()
{
    int arr[2][2];
    printf("Welcome to the 2D array input\n");
    for (size_t i = 0; i < 2; i++){
        for (size_t j = 0; j < 2; j++){
            printf("Enter the element[%d][%d] of 2D array: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    input2Darray(arr);
    
    return 0;
}

#include <stdio.h>

void bubbleSort()
{
    int num = 0;
    printf("Enter the number of elements that you want to enter: ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < num - 1; i++){
        for (int j = 0; j < num - i - 1; j++){
            if (arr[j] > arr [j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The sorted elements are: \n");
    for (int i = 0; i < num; i++)
    {    
        printf("%d ", arr[i]);
    }

}

int main(void)
{
    printf("Welcome to the sorting interface\n");
    bubbleSort();
}

#include <stdio.h>

void arrayInput(int arr[], int size);
void printArray(int arr[], int size);
void swap(int *a, int *b);
void bubbleSort(int arr[], int size);

void arrayInput(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap(int *a, int *b)
{
    int swap = *a;
    *a = *b;
    *b = swap;
}

void bubbleSort(int arr[], int size)
{
    for (size_t i = 0; i < size; i++){
        for (size_t j = 0; j < size - i - 1; j++){
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }       
    }    
}

int main()
{
    int n = 0;
    printf("\033[1;32mEnter the elements of array: \033[0m");
    scanf("%d", &n);
    int arr[n];
    arrayInput(arr, n);
    
    printf("\033[1;33mThe array before sorting is: \033[0m\n");
    printArray(arr, n);
    
    bubbleSort(arr, n);

    printf("\n\033[1;33mThe array after sorting is: \033[0m\n");
    printArray(arr, n);

}

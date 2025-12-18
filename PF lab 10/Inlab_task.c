#include <stdio.h>

void reverseArray(int *ptr, int size)
{
    int *left = ptr;
    int *right = size + ptr - 1;
    while (left < right)
    {
        int swap = *left;
        *left = *right;
        *right = swap;
        left++;
        right--;
    }
}

void arrayInput(int arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int Arr[], int size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", Arr[i]);
    }
}

int main()
{
    int num = 0;
    printf("\033[1;32mWelcome to the array reversal center\033[0m\n");
    printf("Enter the elements of the array: ");
    scanf("%d", &num);
    int arr[num];
    arrayInput(arr, num);

    printf("\033[1;32mThe array before the reversing is: \033[0m\n");
    printArray(arr, num);

    reverseArray(arr, num);

    printf("\n");
    printf("\033[1;32mThe array after the reversing is: \033[0m\n");
    printArray(arr, num);
}

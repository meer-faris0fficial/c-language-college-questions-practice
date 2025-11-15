#include <stdio.h>

int linearSearch(int arr[], int size, int input)
{
    int i = 0;
    for ( ; i < size; i++){
        if (input == arr[i]){
            return i + 1;
        }
    }
    return -1;
}

void arrayInput()
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
    
    int noToFind = 0;
    printf("Enter the element you want to find: ");
    scanf("%d", &noToFind);

    int result = linearSearch(arr, num, noToFind);
    if (result != -1)
    {
        printf("Your no was fount at %d position in the array", result);
    }else{
        printf("Your element is not found in the array");
    }
    
}

int main()
{
    printf("Welcome to the linear of the element\n");
    arrayInput();
}

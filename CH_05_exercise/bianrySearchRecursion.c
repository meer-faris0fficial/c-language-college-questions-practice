#include <stdio.h>

int binarySearch(int arr[],int left, int right, int input)
{
    int mid = left + (right - left)/2;

    if(left > right){
        return -1;
    }
    if (input == arr[mid]) return mid + 1;
    if (input > arr[mid]) return binarySearch(arr, mid + 1, right, input);
    else return binarySearch(arr, left, mid - 1, input);
   
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
    printf("\nEnter the element you want to find: ");
    scanf("%d", &noToFind);

    int left = 0, right = num - 1;

    int result = binarySearch(arr, left, right, noToFind);
    if (result != -1)
    {
        printf("Your no was fount at %d position in the array", result);
    }else{
        printf("Your element is not found in the array");
    }
    
}

int main()
{
    printf("Welcome to the bianry search\n");
    arrayInput();

    return 0;
}

#include <stdio.h>

int binarySearch(int arr[],int size,int input)
{
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (arr[mid] == input)
            return mid + 1; 
        else if (arr[mid] < input)
            left = mid + 1;
        else
            right = mid - 1;
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
    printf("\nEnter the element you want to find: ");
    scanf("%d", &noToFind);

    int result = binarySearch(arr, num, noToFind);
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

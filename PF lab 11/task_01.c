#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
     
    int num = sizeof(arr)/sizeof(arr[0]);
    int *ptr = arr;

    printf("The elements of the array are: \n");

    while (ptr < arr + num)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}

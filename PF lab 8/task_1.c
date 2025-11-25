#include <stdio.h>

int main()
{   
    int size = 5;
    int arr[20] = {1, 2, 3, 4, 5};
    int i = 0 , pos = -1;

    //Check the index of element to be deleted
    for(i = 0; i < size; i++)
    {
        if(arr[i] == 3)
        {
            pos = i;
            break;
        }
    }

    //Check if element in the array then delete it
    if(pos != -1)
    {
        for(i = pos; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    //print the array after the deletion of the element
    printf("After deleting 3: ");
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    //this shift the position of the last two element
    for(i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = 6;
    size++;

    //print array after inserting 6 
    printf("After inserting 6: ");
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    //it simultanously increase and append the element into the array
    arr[size++] = 7;
    arr[size++] = 8;
    arr[size++] = 9;
    arr[size++] = 10;

    //After appending elements in the array it prints the new array
    printf("After appending elements: ");
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

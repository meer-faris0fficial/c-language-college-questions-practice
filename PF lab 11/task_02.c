#include <stdio.h>

int main()
{
    int num = 0;
    printf("Enter the no of elements of array: ");
    scanf("%d", &num);
    int arr[num];

    int *ptr = arr;

    for (size_t i = 0; i < num; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", ptr + i);
    }

    int index = num;
    
    while (1)
    {
    printf("Enter the position of element you want to print(%d or greater to exit): ", num);
    scanf("%d", &index);

    if (index > num || index <= 0){
        printf("The index is out of bound\n");
        break;
    }

    printf("The %d element is: %d\n", index, *(ptr + index - 1));

    }

    return 0;
}

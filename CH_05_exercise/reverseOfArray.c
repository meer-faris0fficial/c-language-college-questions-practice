#include <stdio.h>

void ArrayReverasl()
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

    int i = 0;
    while (i < num/2){
        int temp = arr[i];
        arr[i] = arr[(num -1) - i];
        arr[(num - 1) - i] = temp;
        i++;
    }

    printf("The array after reversing the elements is: \n");
    for (size_t i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    printf("Welcome to the array reversal\n");
    ArrayReverasl();
}

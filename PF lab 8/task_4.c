#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

void printPrimeNumbers(int arr[], int size)
{
    printf("Prime numbers in the array are: ");

    for (int i = 0; i < size; i++)
    {
        if (isPrime(arr[i]))
            printf("%d ", arr[i]);
    }
}

void inputArray()
{
    int num = 0;
    printf("Enter the number of element of the wanted array: ");
    scanf("%d", &num);
    int arr[num];

    for (size_t i = 0; i < num; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printPrimeNumbers(arr, num);
}

int main()
{ 
    inputArray();
    return 0;
}

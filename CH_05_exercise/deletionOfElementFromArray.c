#include <stdio.h>

void Arraysum()
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
    int numToFind = 0;
    printf("Enter the element you want to delete: ");
    scanf("%d", &numToFind);
    
    int occ = 0;
    for (int i = 0; i < num; i++)
    {
        if (numToFind == arr[i])
        {
            occ++;
        }        
    }
    // printf("The %d is found %d times in the array", numToFind, occ);
    int newlen = num - occ;
    int newArr[newlen];
    if (occ != 0)
    {
        int i = 0, j = 0;
        while (i < num)
        {
            if(arr[i] != numToFind){
                newArr[j] = arr[i];
                j++;
            }
            i++;
        }

        printf("The array after the deletion of the element is: ");
        for (size_t i = 0; i < newlen; i++)
        {
            printf("%d, ", newArr[i]);
        }
    }else{
        printf("There is no such element in the array\n");
        printf("The array elements are: \n");
        for (size_t i = 0; i < num; i++)
        {
            printf("%d, ", arr[i]);
        }
    }
    
}

int main()
{
    Arraysum();
    return 0;
}

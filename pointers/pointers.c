#include <stdio.h>

int main()
{
    int a = 49999;
    int *x = &a;
    char *y = (char*)x;

    printf("The address of the *y is: %p\n", (void*)y);
    printf("value is: %d\n", (int)*(y + 0));

    int arr[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int (*ptr)[3] = arr;
    printf("The value of the 2nd row and 2nd index is: %d\n",
           *(*(ptr + 1) + 1));

    char *str[] = {"Hello", "There", "Mango", "Banana"};

    printf("The address of first element is: %p and of the second element is: %p\n",
           (void*)str, (void*)(str[0] + 1));

    
    printf("the string element is %c\n",*(str[0] + 1));

    return 0;
}

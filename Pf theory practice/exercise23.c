#include <stdio.h>

int main()
{
    int first_no, second_no;

    printf("Welcome to the number multiple checker.\n");
    printf("Enter the first number: ");
    scanf("%d", &first_no);

    printf("Enter the second number: ");
    scanf("%d", &second_no);

    int result = first_no % second_no;

    if (result == 0){
        printf("%d is the multiple of %d", second_no, first_no);
    }else{
        printf("%d is not the multiple of the %d", second_no, first_no);
    }

    return 0;
}

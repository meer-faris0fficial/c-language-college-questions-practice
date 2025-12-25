#include <stdio.h>

typedef struct arrayOfStructures
{
    char name[1000];
    int roll;
    int numbers;
}str;

int main()
{
    register int x = 99;

    int n = 0;
    printf("Enter the total no of students: ");
    scanf("%d", &n);
    str arr[n];
    for (size_t i = 0; i < n; i++)
    {
        getchar();
        printf("Enter the %d student name: ", i + 1);
        scanf("%[^\n]", arr[i].name);
        printf("Enter the roll no: ");
        scanf("%d", &arr[i].roll);
        printf("Enter the numbers of the student: ");
        scanf("%d", &arr[i].numbers);
    }

    int st = 0;
    printf("\nEnter the student no to print his/her data: ");
    scanf("%d", &st);
    printf("\nThe name of the student is: %s\n", arr[st - 1].name);
    printf("The roll no fo the student is: %d\n", arr[st - 1].roll);
    printf("The numbers of the student is: %d\n", arr[st - 1].numbers);

    return 0;
}

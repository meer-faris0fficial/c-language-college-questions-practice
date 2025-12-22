#include <stdio.h>
#include <string.h>

int main()
{
    char *(students)[4] = {
        "Ali Hassan",
        "Muhammad Tahir Hussain",
        "Amir Hamza",
        "Muhammad Anas Alam"
    };
    
    int num = sizeof(students)/sizeof(students[0]);
    
    printf("The name of the students are: ");
    for (int i = 0; i < num; i++)
    {
        printf("%s\n", *(students + i));
    }
    
    return 0;
}


























// int num = 0;
// printf("Enter the no of student: ") ;
// scanf("%d", &num);
// getchar();

// char arr[num][100];

// printf("Enter their name\n");

// for (size_t i = 0; i < num; i++)
// {
//     printf("Enter the %d student name: ", i + 1);
//     fgets(*(arr + i), 100, stdin);  // stdin = standered input red from the keyboard
//     *(students + i) = *(arr + i) ;
// }

// printf("Student Names:\n");

#include <stdio.h>
#include <ctype.h>

void ToUpper(char *str)
{
    while (*str != '\0')
    {
        *str = toupper(*str); // convert to uppercase
        ++str; 
    }
    
}

int cube(int *a)
{
    *a = *a * *a * *a;
}

int main()
{
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    cube(&num);
    printf("The value of the num is: %d\n", num);

    char string[] = "cHaRaCters and $32.98";
    printf("The string before conversion is: %s\n", string);
    ToUpper(string);
    printf("The string after conversion is: %s\n", string);

}

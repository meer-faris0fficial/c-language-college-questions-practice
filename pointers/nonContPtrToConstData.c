
#include <stdio.h>

void printCharacters(const char *sPtr);

int main(void)
{
    // initialize char array
    char string[] = "print characters of a string";

    puts("The string is:");
    printCharacters(string);
    puts("");

    int x = 9;
    int *ptr = &x;
    int y = 0;
    printf("The value of the x is: %d\n", *ptr);
    ptr = &y;
    printf("The value of the y is: %d\n", *ptr);

}

// sPtr cannot be used to modify the character to which it points,
// i.e., sPtr is a "read-only" pointer
void printCharacters(const char *sPtr)
{
    // loop through entire string
    for (; *sPtr != '\0'; ++sPtr)
    { // no initialization
        printf("%c", *sPtr);
    }
}

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>  // for tolower() and isalnum()

bool palindromeChecker(char s[])
{
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right) {
        // Skip spaces and non-alphanumeric characters
        if (!isalnum(s[left])) {
            left++;
            continue;
        }
        if (!isalnum(s[right])) {
            right--;
            continue;
        }

        // Compare lowercase characters
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main()
{
    char string[1000];

    printf("Enter the string: ");
    scanf(" [^\n]s", &string);

    if (palindromeChecker(string))
        printf("The string is palindrome\n");
    else
        printf("The string is not palindrome\n");

    return 0;
}

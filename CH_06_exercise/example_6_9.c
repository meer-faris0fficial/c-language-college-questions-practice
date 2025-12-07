#include <stdio.h>

#define RESET   "\033[0m"
#define BOLD    "\033[1m"

#define BLACK   "30"
#define RED     "31"
#define GREEN   "32"
#define YELLOW  "33"
#define BLUE    "34"
#define MAGENTA "35"
#define CYAN    "36"
#define WHITE   "37"

int main()
{
    printf("\e[1m\e[2m This is bold and colorful text \e[m\e[m\n");
    int x = printf("Hello\n");
    printf("%d\n", x); // print the no of charachters in the printf
    printf("\033[1;31mBold Red Text\033[0m\n"); // 1 for the bold
    printf("\033[1;32mBold Green Text\033[0m\n");
    printf("\033[1;33mBold Yellow Text\033[0m\n");
    printf("\033[30;47mBlack text on white background\033[0m\n");

    return 0;
}

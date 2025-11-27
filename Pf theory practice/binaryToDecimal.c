#include <stdio.h>
#include <math.h>

int main()
{
    int binary = 0;
    printf("Welcome to the decimal conversion calculator\n");
    printf("Enter the binary digit: ");
    scanf("%d", &binary);

    int decimal = 0;
    int n = 0;
    while (binary > 0)
    {
        int mod = binary % 10;
        int num = mod*(pow(2, n));
        decimal += num;
        n++;
        binary /= 10;
    }

    printf("The decimal value of the number is: %d", decimal);
    return 0;
}

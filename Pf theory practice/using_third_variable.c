#include <stdio.h>

int main()
{
    int a, b, c;
    int smallest, largest;

    printf("Welcome to the math calculator\n");
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int sum = a + b + c;
    printf("The sum of the numbers is: %d\n", sum);

    int average = (a + b + c)/ 3;
    printf("The average of the numbers is: %d\n", average);

    int product = a * b * c;
    printf("The product of the numbers is: %d\n", product);

    smallest = a;
    if (b < smallest) {smallest = b;}
    if (c < smallest) {smallest = c;}
    printf("The smallest number is: %d\n", smallest);

    largest = a;
    if (b > largest) {largest = b;}
    if (c > largest) {largest = c;}
    printf("The largest number is: %d\n", largest);

    return 0;
}

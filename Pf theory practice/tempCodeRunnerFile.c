#include <stdio.h>

int maindxws() {
    int num;

    printf("Welcome to the Decimal to Roman Converter\n");
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &num);

    if (num < 1 || num > 100) {
        printf("Please enter a number in range (1 - 100).\n");
        return 1;
    }

    printf("Roman numeral: ");

    if (num == 100) {
        printf("C");
        num = 0;
    }

    if (num >= 90) {
        printf("XC");
        num -= 90;
    }

    if (num >= 50) {
        printf("L");
        num -= 50;
    }

    if (num >= 40) {
        printf("XL");
        num -= 40;
    }

    while (num >= 10) {
        printf("X");
        num -= 10;
    }

    if (num == 9) {
        printf("IX");
        num -= 9;
    }

    if (num >= 5) {
        printf("V");
        num -= 5;
    }

    if (num == 4) {
        printf("IV");
        num -= 4;
    }

    while (num >= 1) {
        printf("I");
        num -= 1;
    }

    printf("\n");
    return 0;
}


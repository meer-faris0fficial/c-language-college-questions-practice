#include <stdio.h>
#include <string.h>

int main() {
    char s[6];          // 5 digits + null character
    int count[10] = {0};

    scanf("%s", s);

    // Count frequency of each digit
    for (int i = 0; i < 5; i++) {
        int digit = s[i] - '0';
        printf("Inside the frequency\n");
        count[digit]++;
    }

    // Check for four-of-a-kind
    for (int i = 2; i <= 9; i++) {
        if (count[i] == 4) {
            printf("Lucky!\n");
            return 0;
        }
    }

    // Check for three-of-a-kind
    for (int i = 2; i <= 9; i++) {
        if (count[i] == 3) {
            printf("Great!\n");
            return 0;
        }
    }

    // Check for a pair
    for (int i = 2; i <= 9; i++) {
        if (count[i] == 2) {
            printf("Just OK\n");
            return 0;
        }
    }

    // None of the above
    printf("Bummer\n");

    return 0;
}

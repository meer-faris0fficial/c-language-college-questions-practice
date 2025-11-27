#include <stdio.h>

int main()
{
    int age, h_rate = 220;

    printf("Welcome to the heart rate calculator.\n");
    printf("Enter your age: ");
    scanf("%d", &age);

    int heartRate = 220 - age;
    int min_rate = heartRate * 0.5;
    int max_rate = heartRate * 0.85;

    printf("Your maximum heart rate is: %d\n", max_rate);
    printf("Your target heart rate is: %d - %d\n", min_rate, max_rate);

    return 0;
}

#include <stdio.h>

int inputMarks(int num){
    int sum = 0;
    int input = 0;
    for (int i = 1; i <= num; i++)
    {
        printf("Enter the marks of student (%d): ", i);
        scanf("%d", &input);
        sum += input;
    }
    return sum;
}

float averageMarks(int total, int num){
    float averageOfStudents = (float) total/num;
    return averageOfStudents;
}

int main()
{
    int num = 0;
    printf("Welcome to the average calculator\n");
    printf("Enter the number of the students: ");
    scanf("%d", &num);

    int sumTotal = inputMarks(num);
    float average = averageMarks(sumTotal, num);

    printf("The average of %d students is : %.2f", num, average);

    return 0;
}

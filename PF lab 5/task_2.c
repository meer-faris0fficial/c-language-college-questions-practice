#include <stdio.h>

int main()
{
    int num = 0;
    int temp = 0;
    int sum = 0;
    printf("Welcome to average calculator\n");
    printf("Enter 9999 to quit the loop\n");

    do
    {
        printf("Enter the number: ");
        scanf("%d", &temp);

        if (temp != 9999)
        {
            sum += temp;
            num++;
        }        
    
    } while (temp != 9999);

    if (num > 0)
    {
        float average = (float)sum / num;
        printf("The average of the numbers is: %.2f\n", average);
    }else{
        printf("There is no input");
    }
     
    return 0;
}

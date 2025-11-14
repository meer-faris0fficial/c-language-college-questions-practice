#include <stdio.h>

int main()
{
    int num = 0;
    int first, second, third, fourth;
    int temp1, temp2;
    int num_copy2 = 0;

    printf("Welcome to the digit decryption calculator\n");
    printf("Enter the code: ");
    scanf("%d", &num);
    num_copy2 = num;

    if (num_copy2 == 0000)
    {
        printf("The decrypted number is: 3333");
    }
    else
    {   
        while (num < 1000 || num > 9999)
            {
                printf("Enter the valid input: ");
                scanf("%d", &num);
                num_copy2 = num;
            }

        int modol_no = 0;
        int remainder = 0;
        int mod = 0;
        while (num_copy2 > 0)
        {
            int remainder = num_copy2 % 10;
            if (remainder >= 7){
                mod = remainder - 7;
            }
            if (remainder < 7)
            {
                mod = remainder + 3;
            }
            modol_no = modol_no * 10 + mod;
            num_copy2 /= 10;
        }            

        // separate the digits
        first = modol_no % 10;
        modol_no /= 10;
        second = modol_no % 10;
        modol_no /= 10;
        third = modol_no % 10;
        modol_no /= 10;
        fourth = modol_no % 10;

        // swaping the numbers
        temp1 = first;
        first = third;
        third = temp1;

        temp2 = second;
        second = fourth;
        fourth = temp2;

        printf("The decrypted number is: %d%d%d%d", first, second, third, fourth);
        
    }    
    
    return 0;
}

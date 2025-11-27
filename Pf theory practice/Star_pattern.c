#include <stdio.h>

int main()
{
    int stars;
    printf("Welcome to the star pattern printing\n");
    printf("Enter the no of stars you want to print in one line: ");
    scanf("%d", &stars);

    int i = 1;
    while (i <= stars)
    {
        int j = 1;
        while (j <= stars)
        {
            if (i == 1 || i == stars || j == 1 || j ==stars)
            {
                printf("*");
            }else{
                printf(" ");
            }            
            j++;
        }       
        printf("\n");
        i++; 
    }  
    
    return 0;
}

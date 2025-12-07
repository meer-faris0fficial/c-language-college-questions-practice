#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int possibleSum[11] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int freq[11] = {0};
    
    int i = 0;
    while (i < 3600)
    {
        int sum = 0;
        int rand1 = 1 + rand() % 6;
        int rand2 = 1 + rand() % 6;
        sum = rand1 + rand2;
        switch (sum){
        case 2:
            freq[0] += 1;
            break;
        case 3:
            freq[1] += 1;
            break;
        case 4:
            freq[2] += 1;
            break;
        case 5:
            freq[3] += 1;
            break;
        case 6:
            freq[4] += 1;
            break;
        case 7:
            freq[5] += 1;
            break;
        case 8:
            freq[6] += 1;
            break;
        case 9:
            freq[7] += 1;
            break;
        case 10:
            freq[8] += 1;
            break;
        case 11:
            freq[9] += 1;
            break;
        case 12:
            freq[10] += 1;
            break;
        
        default:
            break;
        }
        i++;
    }

    printf("PossibleSum\tFrequency\n");
    for (size_t i = 0; i < 11; i++)
    {
        printf("%d          \t%d", possibleSum[i], freq[i]);
        printf("\n");
    }
    printf("\n");
    printf("The highest frequency no is %d and its frequency is: %d", possibleSum[5],freq[5]);
    
    return 0;
}

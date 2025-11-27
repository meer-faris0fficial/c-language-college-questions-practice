#include <stdio.h>

int main()
{
    int rows = 5, coloumns = 5;
    for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= coloumns; j++){
            if (i == rows || i == 1 || j == rows || j == 1){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }

    return 0;
}

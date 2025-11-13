#include <stdio.h>

int main(void)
{
    unsigned int count = 1;   

    while (count <= 10)  
    {
        printf(count % 2 == 0 ? "****" : "++++++++");  
        count += 1;     
    } 

    return 0;
}

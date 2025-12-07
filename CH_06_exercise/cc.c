#include <stdio.h>

int main() {
    int a, b, c, d;
    
    scanf("Starting number: %d", &a);
    scanf("Increment: %d", &b); 
    scanf("Numbers per line: %d", &c);
    scanf("Number of lines: %d", &d);

    int current = a;

    for (int i = 0; i < d; i++) {        
        for (int j = 0; j < c; j++) {    
            printf("%d", current);
            if (j < c - 1) {
                printf(" ");  
            }
            current += b;      
        }
        printf("\n");
    }

    return 0;
}

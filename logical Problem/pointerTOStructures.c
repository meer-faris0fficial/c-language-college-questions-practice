#include <stdio.h>
#include <stdlib.h>  

typedef struct points {
    int *x;
    int *y;
} coor;

struct pointerTOStructures
{
    int z;
};

typedef struct point{
    int x;
    int y;
}c;

void setPoint(struct point *p) {
    p->x = 100;
    p->y = 200;
};

int main() {
    struct point alihassan;
    coor *p1 = malloc(sizeof(coor));
    coor p2;

    p1->x = malloc(sizeof(int)); //(*p1).x
    p1->y = malloc(sizeof(int));
 
    *(p1->x) = 23;
    *(p1->y) = 34;

    printf("The value of x and y is: %d, %d\n", *(p1->x), *(p1->y));

    free(p1->x);
    free(p1->y);
    free(p1);

    p2.x = malloc(sizeof(int));
    p2.y = malloc(sizeof(int));
    *(p2.x) = 10;
    *(p2.y) = 20;
    printf("The value of x and y is: %d, %d\n", *(p2.x), *(p2.y));
    free(p2.x);
    free(p2.y);

    // Use if the variable are not the pointers inside the struct
    c var1;
    c *var2 = &var1;
    var2->x = 11;
    var2->y = 1;
    printf("The value of x and y is: %d, %d\n", var2->x, var2->y );
    
    c var3;
    setPoint(&var3);
    printf("The value of x and y is: %d, %d\n", var3.x, var3.y );

    return 0;
}

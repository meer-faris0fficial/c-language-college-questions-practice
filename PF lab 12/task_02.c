#include <stdio.h>

union Numeric {
    int intValue;
    float floatValue;
    struct {
        short high;
        short low;
    } Parts;
};
union Numeric n;

int main() {
    
    n.intValue = 9999;
    printf("After assigning intValue = 1000:\n");
    printf("intValue: %d\n", n.intValue);
    printf("floatValue: %f \n", n.floatValue);
    printf("Parts.high: %d\nParts.low: %d \n\n", n.Parts.high, n.Parts.low);

    n.floatValue = 100.45;
    printf("After assigning floatValue = 100.45:\n");
    printf("intValue: %d\n", n.intValue);
    printf("floatValue: %f\n", n.floatValue);
    printf("Parts.high: %d\nParts.low: %d\n\n", n.Parts.high, n.Parts.low);

    n.Parts.high = 10;
    n.Parts.low = 20;
    printf("After assigning Parts.high = 10 and Parts.low = 20:\n");
    printf("intValue: %d \n", n.intValue);
    printf("floatValue: %f \n", n.floatValue);
    printf("Parts.high: %d\nParts.low: %d\n", n.Parts.high, n.Parts.low);

    return 0;
}

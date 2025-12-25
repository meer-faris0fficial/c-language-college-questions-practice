#include <stdio.h>

#define PRINT_AND_ADD(a,b) { \
    printf("Adding %d and %d\n", a, b); \
    int sum = a + b; \
    printf("Sum is %d\n", sum); \
}

#define forever for(;;)

#define y 5
#if (y == 5)
    #undef y
    #define y 6
#endif


#define dprint(expr) printf(#expr " = %g\n", expr) // not safe for the int value
//It is called _Generic selection allows compile-time type selection


#define print(expr) _Generic((expr), \
    int: printf(#expr " = %d\n", expr), \
    float: printf(#expr " = %f\n", expr), \
    double: printf(#expr " = %g\n", expr), \
    default: printf("Inavlid data type\n") \
)

//## is called the token-pasting operator (or concatenation operator) in C.
#define var(num) var##num

int main() {
    int x = 9;
    printf("the value of x is: %d %s\n", x, "and after that it is this %d", 30);
    PRINT_AND_ADD(3, 4);
    PRINT_AND_ADD(5, 6);

    
    int var1 = 10;
    int var2 = 20;
    printf("%d %d\n", var(1), var(2)); 
    // dprint(var1 + var2);

    int i = 0;
    float f = 2.5; // compiler auto convert its type to double and the final answer will be in the form of the double
    double g = 3.5;
    char ch = 'A';

    dprint(f * g);
    // dprint(x); give the garbage value
    print(x);
    print(f * g);
    print(ch);

    printf("%s\n", _Generic((x),
        int: "x is int",
        double: "x is double",
        char: "x is char",
        default: "x is something else"
    ));

    forever
    {
        printf("Hello\n");
        i++;
        if (i == 5)
            break;   
    }
    printf("The value of the redefine y is: %d\n", y);

    return 0;
}

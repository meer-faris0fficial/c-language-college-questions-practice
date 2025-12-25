#include <stdio.h>

#define MAKE_FUNC(name) void func_##name() { \
    printf("Function " #name " called\n"); \
}

MAKE_FUNC(foo)
MAKE_FUNC(bar)

int main() {
    func_foo();
    func_bar();
    printf("the value of the string 1 is: %d %s %d %s", 1,"the next string: ", 2, "and for the last one\n");

}

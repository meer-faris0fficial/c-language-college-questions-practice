#include <stdio.h>

enum Status {
    OFF = 0,
    ON,
    PAUSE = 5,
    STOP
};

struct Device {
    enum Status state;
    int powerLevel;
};

int main() {
    struct Device d;

    // Correct assignments
    d.state = ON; // "NO" was incoorect assignment
    d.powerLevel = 50; // integer value cannot store the floating value which is 50.5

    // Correct comparison
    if (d.state == ON) // single = was used in this case which is wrong
        printf("Device is ON\n");
    else if (d.state == PAUSE)  // PAUSED was there which is wrong 
        printf("Device is Paused\n");

    // Switch statement
    switch (d.state) {
        case OFF:
            printf("Power is OFF\n");
            break; // break; was missing
        case ON:
            printf("Power is ON\n");
            break;
        case PAUSE:
            printf("Power is Paused\n");
            break;
        case STOP:
            printf("Power is Stopped\n");
            break; // break; was missing
        default:
            printf("Unknown state\n");
    }

    printf("Current State: %d\n", d.state); // state cannot be accesed by only state rather d.state should use

    return 0; // 0 was missing 
}

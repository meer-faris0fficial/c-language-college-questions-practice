#include <stdio.h>

#define SIZE 50

int main() {
    int floor[SIZE][SIZE] = {0};   // 50x50 sketchpad
    int row = 0, col = 0;          // turtle position
    int direction = 0;             // 0=Right, 1=Down, 2=Left, 3=Up
    int pen = 0;                   // 0 = Up, 1 = Down

    int commands[][2] = {
        {2, 0},     // Pen down
        {5, 12},    // Move 12
        {3, 0},     // Turn right
        {5, 12},
        {3, 0},
        {5, 12},
        {3, 0},
        {5, 12},
        {1, 0},     // Pen up
        {6, 0},     // Print
        {9, 0}      // End
    };

    int i = 0;
    while (1) {
        int cmd = commands[i][0];
        int value = commands[i][1];

        if (cmd == 1) {          // Pen up
            pen = 0;
        }
        else if (cmd == 2) {     // Pen down
            pen = 1;
            floor[row][col] = 1;
        }
        else if (cmd == 3) {     // Turn right
            direction = (direction + 1) % 4;
        }
        else if (cmd == 4) {     // Turn left
            direction = (direction + 3) % 4;
        }
        else if (cmd == 5) {     // Move forward
            int steps = value;
            while (steps != 0) {
                if (direction == 0 && col < SIZE - 1)
                    col++;
                else if (direction == 1 && row < SIZE - 1)
                    row++;
                else if (direction == 2 && col > 0)
                    col--;
                else if (direction == 3 && row > 0)
                    row--;

                if (pen == 1)
                    floor[row][col] = 1;
                steps--;
            }
        }
        else if (cmd == 6) {     // Print the floor
            for (int r = 0; r < SIZE; r++) {
                for (int c = 0; c < SIZE; c++) {
                    if (floor[r][c] == 1)
                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
        }
        else if (cmd == 9) {     // End program
            break;
        }

        i++;
    }

    return 0;
}

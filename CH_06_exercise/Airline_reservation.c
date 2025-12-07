#include <stdio.h>

#define TOTAL_SEATS 10

void printBoardingPass(int seatNumber, int section) {
    printf("\n--- Boarding Pass ---\n");
    printf("Seat Number: %d\n", seatNumber + 1);
    if (section == 1)
        printf("Section: First Class\n");
    else
        printf("Section: Economy\n");
    printf("--------------------\n\n");
}

int assignSeat(int seats[], int start, int end) {
    for (int i = start; i <= end; i++) {
        if (seats[i] == 0) {
            seats[i] = 1; 
            return i;     
        }
    }
    return -1; 
}

int main() {
    int seats[TOTAL_SEATS] = {0}; 
    int choice, seatIndex;
    int alternateChoice;

    while (1) {
        printf("Please type 1 for \"First Class\"\n");
        printf("Please type 2 for \"Economy\"\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            seatIndex = assignSeat(seats, 0, 4);
            if (seatIndex != -1) {
                printBoardingPass(seatIndex, 1);
            } else {
                printf("First Class is full. Is Economy acceptable? (1 = y/0 = n): ");
                scanf(" %d", &alternateChoice);
                if (alternateChoice == 1) {
                    seatIndex = assignSeat(seats, 5, 9);
                    if (seatIndex != -1) {
                        printBoardingPass(seatIndex, 2);
                    } else {
                        printf("Sorry, the plane is full. Next flight leaves in 3 hours.\n\n");
                        break;
                    }
                } else {
                    printf("Next flight leaves in 3 hours.\n\n");
                    break;
                }
            }
        } else if (choice == 2) {
            seatIndex = assignSeat(seats, 5, 9);
            if (seatIndex != -1) {
                printBoardingPass(seatIndex, 2);
            } else {
                printf("Economy is full. Is First Class acceptable? (1 = y/0 = n): ");
                scanf(" %d", &alternateChoice);
                if (alternateChoice == 1) {
                    seatIndex = assignSeat(seats, 0, 4);
                    if (seatIndex != -1) {
                        printBoardingPass(seatIndex, 1);
                    } else {
                        printf("Sorry, the plane is full. Next flight leaves in 3 hours.\n\n");
                        break;
                    }
                } else {
                    printf("Next flight leaves in 3 hours.\n\n");
                    break;
                }
            }
        } else {
            printf("Invalid choice. Please enter 1 or 2.\n\n");
        }

        
        int full = 1;
        for (int i = 0; i < TOTAL_SEATS; i++) {
            if (seats[i] == 0) {
                full = 0;
                break;
            }
        }
        if (full) {
            printf("All seats are full. Next flight leaves in 3 hours.\n");
            break;
        }
    }

    return 0;
}

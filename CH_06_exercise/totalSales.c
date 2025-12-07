#include <stdio.h>

int main() {
    int sales[5][4] = {0};   // 5 products × 4 salespeople
    int salesperson, product;
    int amount;

    printf("Enter sales data (salesperson product amount). Enter -1 to stop.\n");

    while (1) {
        printf("Salesperson (1-4, or -1 to end): ");
        scanf("%d", &salesperson);

        if (salesperson == -1)
            break;

        printf("Product (1-5): ");
        scanf("%d", &product);

        printf("Amount: ");
        scanf("%d", &amount);

        sales[product - 1][salesperson - 1] += amount;
    }

    printf("\n----------------------------------------------\n");
    printf("             Sales Report (Monthly)\n");
    printf("----------------------------------------------\n");
    printf("Product    S1       S2      S3      S4    | Total\n");
    printf("-------------------------------------------------\n");

    int rowTotal, colTotal[4] = {0};
    
    for (int i = 0; i < 5; i++) {
        rowTotal = 0;
        printf("  %d       ", i + 1);

        for (int j = 0; j < 4; j++) {
            printf("%5d   ", sales[i][j]);
            rowTotal += sales[i][j];
            colTotal[j] += sales[i][j];
        }

        printf("| %3d\n", rowTotal);
    }

    // Print column totals
    printf("-------------------------------------------------\n");
    printf("Total    ");

    for (int j = 0; j < 4; j++)
        printf("%5d   ", colTotal[j]);

    printf("\n-------------------------------------------------\n");

    return 0;
}

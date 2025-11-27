#include <stdio.h>

int main(void) {
    char a_statement[200], b_statement[200];
    int i, a_is_knight, b_is_knight;
    int a_truth, b_truth;
    int valid_a, valid_b;
    int solutions = 0;

    printf("Knights and Knaves Puzzle Solver (no <string.h>, <stdbool.h>, or classes)\n");
    printf("Use one of these exact statements (case sensitive):\n");
    printf("  \"B is a knight\"\n  \"B is a knave\"\n  \"A is a knight\"\n  \"A is a knave\"\n  \"The two of us are opposite types\"\n\n");

    // ---- Input ----
    printf("What does A say? ");
    fgets(a_statement, sizeof(a_statement), stdin);
    for (i = 0; a_statement[i] != '\0'; i++) {
        if (a_statement[i] == '\n') a_statement[i] = '\0';
    }

    printf("What does B say? ");
    fgets(b_statement, sizeof(b_statement), stdin);
    for (i = 0; b_statement[i] != '\0'; i++) {
        if (b_statement[i] == '\n') b_statement[i] = '\0';
    }

    // ---- Try all 4 combinations ----
    for (a_is_knight = 0; a_is_knight <= 1; a_is_knight++) {
        for (b_is_knight = 0; b_is_knight <= 1; b_is_knight++) {

            // --- A's statement truth ---
            if (a_statement[0] == 'B' && a_statement[5] == 'k')          // "B is a knight"
                a_truth = b_is_knight;
            else if (a_statement[0] == 'B' && a_statement[5] == 'n')     // "B is a knave"
                a_truth = !b_is_knight;
            else if (a_statement[0] == 'A' && a_statement[5] == 'k')     // "A is a knight"
                a_truth = a_is_knight;
            else if (a_statement[0] == 'A' && a_statement[5] == 'n')     // "A is a knave"
                a_truth = !a_is_knight;
            else if (a_statement[0] == 'T')                              // "The two of us are opposite types"
                a_truth = (a_is_knight != b_is_knight);
            else
                a_truth = 0;

            // --- B's statement truth ---
            if (b_statement[0] == 'B' && b_statement[5] == 'k')
                b_truth = b_is_knight;
            else if (b_statement[0] == 'B' && b_statement[5] == 'n')
                b_truth = !b_is_knight;
            else if (b_statement[0] == 'A' && b_statement[5] == 'k')
                b_truth = a_is_knight;
            else if (b_statement[0] == 'A' && b_statement[5] == 'n')
                b_truth = !a_is_knight;
            else if (b_statement[0] == 'T')
                b_truth = (a_is_knight != b_is_knight);
            else
                b_truth = 0;

            // --- Check logical consistency ---
            valid_a = (a_is_knight && a_truth) || (!a_is_knight && !a_truth);
            valid_b = (b_is_knight && b_truth) || (!b_is_knight && !b_truth);

            if (valid_a && valid_b) {
                printf("Possible: A is a %s, B is a %s\n",
                       a_is_knight ? "Knight" : "Knave",
                       b_is_knight ? "Knight" : "Knave");
                solutions++;
            }
        }
    }

    if (solutions == 0) {
        printf("No consistent solution found.\n");
    }

    return 0;
}

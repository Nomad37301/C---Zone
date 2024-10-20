#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void calcRound(long length) {
    long round_rhombus = 4 * length;
    printf("The length of the rhombus is: %ld\n", round_rhombus);
}

void calcWidth(long diag, long diag2) {
    float width_rhombus = (float)diag * (float)diag2 / 2;
    printf("The width of the rhombus is: %f\n", width_rhombus);
}

int valInput(const char *input, long *value) {
    char *endPtr;
    *value = strtol(input, &endPtr, 10);
    if (*endPtr != '\0') {
        printf("Invalid input. Please enter a valid number.\n");
        return 0;
    } else {
        return 1;
    }
}

void getInput() {
    char loop;
    do {
        int choice;
        printf("RHOMBUS MENU \n");
        printf("--------------- \n");
        printf("1. LENGTH \n");
        printf("2. WIDTH \n");
        printf("--------------- \n");
        printf("INSERT CHOICE (1-2): ");
        scanf("%d", &choice);
        printf("\n");

        if (choice == 1) {
            char length_rhombus[100];
            long length;

            while (1) {
                printf("Enter the rhombus length (or 'q' to quit): ");
                scanf("%s", length_rhombus);
                if (length_rhombus[0] == 'q') {
                    printf("Exiting...\n");
                    return;
                }
                if (valInput(length_rhombus, &length)) {
                    break;
                }
            }

            calcRound(length);
            printf("Do you want to repeat? (y/n): ");
            scanf(" %c", &loop);
        } else if (choice == 2) {
            char diag_rhombus[100], diag2_rhombus[100];
            long diag, diag2;

            while (1) {
                printf("Enter the rhombus first diagonal (or 'q' to quit): ");
                scanf("%s", diag_rhombus);
                if (diag_rhombus[0] == 'q') {
                    printf("Exiting...\n");
                    return;
                }
                if (valInput(diag_rhombus, &diag)) {
                    break;
                }
            }

            while (1) {
                printf("Enter the rhombus second diagonal (or 'q' to quit): ");
                scanf("%s", diag2_rhombus);
                if (diag2_rhombus[0] == 'q') {
                    printf("Exiting...\n");
                    return;
                }
                if (valInput(diag2_rhombus, &diag2)) {
                    break;
                }
            }

            calcWidth(diag, diag2);
            printf("Do you want to repeat? (y/n): ");
            scanf(" %c", &loop);
        } else {
            printf("\nAnswer is not valid! Pick a choice between 1 and 2.\n");
            printf("Do you want to repeat? (y/n): ");
            scanf(" %c", &loop);
        }
    } while (loop == 'y' || loop == 'Y');
}

int main() {
    getInput();
    return 0;
}
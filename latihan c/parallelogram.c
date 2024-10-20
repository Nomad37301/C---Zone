#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void calcRound(long base1, long base2) {
    long parallelogram_round = 2 * (base1 + base2);
    printf("The length of the parallelogram is: %ld\n", parallelogram_round);
}

void calcWidth(long base1, long height) {
    long parallelogram_widht = base1 * height;
    printf("The width of the parallelogram is: %ld\n", parallelogram_widht);
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
    do
    {
    int choice;
    printf("PARALLELOGRAM MENU \n");
    printf("--------------- \n");
    printf("1. LENGTH \n");
    printf("2. WIDTH \n");
    printf("--------------- \n");
    printf("INSERT CHOICE (1-2): ");
    scanf("%d", &choice);

    
    if (choice == 1) {
        char base1_parallelogram[100], base2_parallelogram[100];
        long base1, base2;

        while (1) {
            printf("Enter the parallelogram first base (or 'q' to quit): ");
            scanf("%s", base1_parallelogram);
            if (base1_parallelogram[0] == 'q') {
                printf("Exiting...\n");
                return;
            }
            if (valInput(base1_parallelogram, &base1)) {
                break;
            }
        }

        while (1) {
            printf("Enter the parallelogram second base (or 'q' to quit): ");
            scanf("%s", base2_parallelogram);
            if (base2_parallelogram[0] == 'q') {
                printf("Exiting...\n");
                return;
            }
            if (valInput(base2_parallelogram, &base2)) {
                break;
            }
        }

        calcRound(base1, base2);
        printf("Do you want to repeat? (y/n): ");
        scanf(" %c", &loop);
    } else if (choice == 2) {
        char base1_parallelogram[100], height_parallelogram[100];
        long base1, height;

        while (1) {
            printf("Enter the parallelogram first base (or 'q' to quit): ");
            scanf("%s", base1_parallelogram);
            if (base1_parallelogram[0] == 'q') {
                printf("Exiting...\n");
                return;
            }
            if (valInput(base1_parallelogram, &base1)) {
                break;
            }
        }

        while (1) {
            printf("Enter the parallelogram height (or 'q' to quit): ");
            scanf("%s", height_parallelogram);
            if (height_parallelogram[0] == 'q') {
                printf("Exiting...\n");
                return;
            }
            if (valInput(height_parallelogram, &height)) {
                break;
            }
        }

        calcWidth(base1, height);
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
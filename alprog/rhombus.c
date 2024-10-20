#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void calc(long length, long diag, long diag2) {
    long round_rhombus = 4 * length;
    float width_rhombus = (float)diag * (float)diag2 / 2;

    printf("The width of the rhombus is: %f\n", width_rhombus);
    printf("The length of the rhombus is: %ld\n", round_rhombus);
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
    char length_rhombus[100], diag_rhombus[100], diag2_rhombus[100];
    long length, diag, diag2;

    
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
   
    calc(length, diag, diag2);

}

int main() {

    getInput();

    return 0;

}
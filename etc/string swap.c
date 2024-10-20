#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char frnm1[100];
    char frnm2[100];
    int frn1, frn2, result; 
    
    printf("Input your number : ");
    scanf("%s", &frnm1);
    frn1 = atoi(frnm1);

    if (frn1 == 0)
    {
        printf("Your input data type is wrong");
        return 0;
    }

    printf("Input your second number : ");
    scanf("%s", &frnm2);
    frn2 = atoi(frnm2);

    if (frn2== 0)
    {
        printf("Your input data type is wrong");
        return 0;
    }

        result = frn1 + frn2; 
        printf("The result is : %d", result);
    
    return 0;
    
}
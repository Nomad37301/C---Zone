#include <stdio.h>

int main() {

    int angka;

    printf(" masukan angka yang ingin di cek :\n");
    scanf("%d", &angka);

    if (angka %2 == 0)
    {
        printf("Angka yang dimasukan adalah angka genap");

    }

    else
    {
        printf("Angka yang1 dimasukan adalah angka ganjil");

    }
    
    return 0;
    
}
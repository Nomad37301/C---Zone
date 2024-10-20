#include <stdio.h>

char cek_umur(int umur) {
    if (umur >= 18) {
        return 'A';
    } else {
        return 'B';
    }
}

int main() {
    int umur;
    char hasil;

    printf("Masukkan umur Anda: ");
    scanf("%d", &umur);

    hasil = cek_umur(umur);

    printf("Hasil: %c\n", hasil);

    return 0;
}
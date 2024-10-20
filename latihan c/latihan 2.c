#include <stdio.h>

int main() {
    int hari;
    printf("Input angka 1 sampai 7: ");
    scanf("%d", &hari);

    printf("\nHari yang diinput adalah: ");

    switch (hari) {
        case 1:
            printf("Senin\n");
            break;
        case 2:
            printf("Selasa\n");
            break;
        case 3:
            printf("Rabu\n");
            break;
        case 4:
            printf("Kamis\n");
            break;
        case 5:
            printf("Jumat\n");
            break;
        case 6:
            printf("Sabtu\n");
            break;
        case 7:
            printf("Minggu\n");
            break;
        default:
            printf("Input tidak valid. Harap masukkan angka antara 1 dan 7.\n");
            break;
    }

    return 0;
}
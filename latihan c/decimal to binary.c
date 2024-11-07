#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000


int main() {

    loopingProgram();
    
    return 0;
}
// Fungsi untuk mengonversi desimal ke biner
void decimalToBinary(int n) {
    // Array untuk menyimpan hasil biner
    int binaryNum[32];
    
    // Indeks array
    int i = 0;
    while (n > 0) {
        // Simpan sisa pembagian dalam array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    // Cetak angka biner (dari belakang)
    printf("Bilangan biner nya adalah : ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNum[j]);
    printf("\n");
}

// Fungsi untuk meminta input dari user dengan validasi
int getInputFromUser () {
    int num;
    int isValid;
    
    // Loop untuk meminta input dan melakukan validasi
    do {
        printf("Masukkan angka desimal: ");
        isValid = scanf("%d", &num);
        
        // Cek apakah input valid (1 berarti input berupa bilangan desimal)
        if (isValid != 1) {
            // Hapus karakter yang tidak valid dari buffer
            while (getchar() != '\n');
            printf("Input tidak valid. Harap masukkan bilangan desimal.\n");
        }
    } while (isValid != 1); // Ulangi sampai input valid
    
    return num;
}

// Fungsi untuk menangani looping dan validasi input
void loopingProgram() {
    char choice[100];
    int isValidChoice;
    
    do {
        // Ambil input dari user dengan validasi
        int num = getInputFromUser ();
        
        // Panggil fungsi konversi
        decimalToBinary(num);
        
        // Tanyakan kepada user apakah ingin melakukan konversi lagi
        do {
            printf("Apakah Anda ingin melakukan konversi lagi? (y/n): ");
            isValidChoice = fgets(choice, MAX, stdin);
            
            // Cek apakah input valid (1 berarti input berupa karakter tunggal)
            if (isValidChoice != 1) {
                // Hapus karakter yang tidak valid dari buffer
                while (getchar() != '\n');
                printf("Input tidak valid. Harap masukkan 'y' atau 'n'.\n");
            } else if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
                printf("Input tidak valid. Harap masukkan 'y' atau 'n'.\n");
            }
        } while (isValidChoice != 1 || (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N'));
    } while (choice == 'y' || choice == 'Y'); // Ulangi jika pilihan 'y' atau 'Y'
}


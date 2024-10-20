#include <stdio.h>   // Header untuk fungsi input-output
#include <stdlib.h>  // Header untuk fungsi umum seperti malloc, exit
#include <string.h>  // Header untuk fungsi manipulasi string
#include <math.h>    // Header untuk fungsi matematika, seperti M_PI

// Deklarasi variabel global untuk menyimpan username dan password input
char usercon[100], passcon[100]; 
char user[] = "Admin";  // Username yang valid
char pass[] = "adm1n";  // Password yang valid

// Deklarasi fungsi
void input();          // Fungsi untuk input username dan password
int validasi();        // Fungsi untuk memvalidasi login
void switchcase();     // Fungsi untuk menu pilihan operasi

void input() { 

    // Meminta input username dari pengguna
    printf("input your username: ");
    fgets(usercon, sizeof(usercon), stdin);  // Membaca username dengan fgets
    usercon[strcspn(usercon, "\n")] = 0;  // Menghilangkan karakter newline

    // Meminta input password dari pengguna
    printf("input your password: ");
    fgets(passcon, sizeof(passcon), stdin);  // Membaca password dengan fgets
    passcon[strcspn(passcon, "\n")] = 0;  // Menghilangkan karakter newline

    // Memanggil fungsi validasi dan lanjut ke switchcase jika berhasil
    if (validasi() == 1) {
        switchcase();
    }
}

int validasi() { 
    // Mengecek apakah username dan password sesuai
    if (strcmp(user, usercon) == 0 && strcmp(pass, passcon) == 0) {
        printf("Selamat anda berhasil login\n\n");  // Pesan sukses
        return 1;  // Mengembalikan nilai 1 jika login berhasil
    } else {
        printf("username atau password salah");  // Pesan gagal
        return 0;  // Mengembalikan nilai 0 jika login gagal
    }
}

void switchcase() { 
    int pilihan;  // Variabel untuk menyimpan pilihan menu
    long aSegi, tSegi, kalks, kalkl, JariL;  // Variabel untuk perhitungan

    // Meminta pilihan pengguna untuk operasi yang akan dijalankan
    printf("masukan pilihan anda antara (1). menghitung luas segi tiga atau (2) menghitung luas lingkaran: ");
    scanf("%d", &pilihan);  // Membaca pilihan pengguna

    // Switch case untuk menentukan operasi berdasarkan pilihan
    switch (pilihan) {
        case 1:
            // Meminta input alas dan tinggi segitiga
            printf("Masukan nilai alas segi tiga: ");
            scanf("%ld", &aSegi);  // Membaca nilai alas
            printf("Masukan nilai tinggi segi tiga: ");
            scanf("%ld", &tSegi);  // Membaca nilai tinggi

            // Menghitung luas segitiga
            kalks = aSegi * tSegi / 2;
            printf("Hasil nya adalah: %ld", kalks);  // Menampilkan hasil
            break;

        case 2:
            // Meminta input jari-jari lingkaran
            printf("Masukan nilai jari-jari lingkaran: ");
            scanf("%ld", &JariL);  // Membaca nilai jari-jari

            // Menghitung luas lingkaran menggunakan konstanta M_PI
            kalkl = M_PI * JariL * JariL;
            printf("Hasil nya adalah: %ld", kalkl);  // Menampilkan hasil
            break;

        default:
            // Pesan jika pilihan tidak valid
            printf("Maaf pilihan anda salah");
            break;
    }
}

int main() { // fungsi utama dari program
    input();  // Memanggil fungsi input untuk memulai program
    return 0;
}

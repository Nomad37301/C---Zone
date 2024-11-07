#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk membersihkan input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Fungsi untuk menampilkan menu utama
void mainMenu() {
    float pokokPinjaman = inputPokokPinjaman();
    float besarBunga = inputBesarBunga();
    int lamaPinjaman = inputLamaPinjaman();
    
    // Menghitung angsuran pokok dan mengonversi besar bunga ke persentase
    float angsuranPokok = pokokPinjaman / lamaPinjaman;
    besarBunga = besarBunga / 100;

    // Menampilkan tabel untuk hasil perhitungan angsuran
    printf("|\t Bulan\t|\t Bunga\t\t\t|\tAngsuran Pokok\t| Angsuran Perbulan\t|\n");

    // Looping untuk menghitung dan menampilkan angsuran tiap bulan
    float totalBunga = 0, totalAngsuran = 0;
    for (int bulan = 1; bulan <= lamaPinjaman; bulan++) {
        float bungaBulan = pokokPinjaman * besarBunga / 12;
        float angsuranPerBulan = angsuranPokok + bungaBulan;

        // Menampilkan hasil angsuran bulan ini
        printf("|\t %d\t|\t Rp. %.2f\t\t|\t Rp. %.2f\t|\t Rp. %.2f\t|\n", bulan, bungaBulan, angsuranPokok, angsuranPerBulan);

        // Mengurangi pokok pinjaman dengan angsuran pokok setiap bulan
        pokokPinjaman -= angsuranPokok;
        totalBunga += bungaBulan;  // Mengakumulasi total bunga
        totalAngsuran += angsuranPerBulan;  // Mengakumulasi total angsuran
    }

    // Menampilkan total bunga dan total angsuran setelah perhitungan selesai
    printf("======================================================================================================(+)\n");
    printf("Total Bunga     =                                                                Rp. %.2f\n", totalBunga);
    printf("Total Angsuran  =                                                                Rp. %.2f\n", totalAngsuran);
}

// Fungsi untuk memasukkan pokok pinjaman
float inputPokokPinjaman() {
    float pokokPinjaman;
    char enter;

    printf("Masukkan Pokok Pinjaman\t: ");
    if (scanf("%f%c", &pokokPinjaman, &enter) != 2 || pokokPinjaman <= 0 || enter != '\n') {
        clearInputBuffer();
        printf("Input tidak valid. Jumlah Pokok pinjaman harus lebih dari 0.\n");
        return inputPokokPinjaman();
    } else {
        return pokokPinjaman;
    }
}

// Fungsi untuk memasukkan besar bunga tahunan dalam persen
float inputBesarBunga() {
    float besarBunga;
    char enter;

    printf("Besar bunga dalam setahun(dalam %%)\t: ");
    if (scanf("%f%c", &besarBunga, &enter) != 2 || besarBunga < 0 || enter != '\n') {
        clearInputBuffer();
        printf("Input tidak valid. Besar bunga harus lebih dari 0.\n");
        return inputBesarBunga();
    } else {
        return besarBunga;
    }
}

// Fungsi untuk memasukkan lama pinjaman dalam bulan
int inputLamaPinjaman() {
    int lamaPinjaman;
    char enter;

    printf("Lama Pinjaman dalam bulan\t: ");
    if (scanf("%d%c", &lamaPinjaman, &enter) != 2 || lamaPinjaman <= 0 || enter != '\n') {
        clearInputBuffer();
        printf("Input tidak valid. Lama Pinjaman harus lebih dari 0.\n");
        return inputLamaPinjaman();
    } else {
        return lamaPinjaman;
    }
}

// Fungsi utama program
int main() {
    clearInputBuffer(); // Bersihkan buffer sebelum menunggu input
    mainMenu(); // Memanggil fungsi untuk menampilkan menu utama
    return 0;
}
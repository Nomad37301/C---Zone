#include <iostream>            // Mengimpor pustaka untuk input-output standar
#include <limits>              // Mengimpor pustaka untuk menangani error pada input
using namespace std;

// Prosedur untuk menampilkan bilangan ganjil (kecuali 13)
void tampilkanBilanganGanjilTanpa13(int maxInput) {
    for (int i = 0; i <= maxInput; i++) {   // Loop dari 0 hingga maxInput
        if (i % 2 != 0 && i != 13) {        // Cek apakah i ganjil dan bukan 13
            cout << i << " ";               // Cetak nilai i
        }
    }
    cout << endl;                           // Pindah baris setelah selesai mencetak
}

// Prosedur untuk menampilkan bilangan ganjil
void tampilkanBilanganGanjil(int maxInput) {
    for (int i = 0; i <= maxInput; i++) {   // Loop dari 0 hingga maxInput
        if (i % 2 != 0) {                   // Cek apakah i adalah bilangan ganjil
            cout << i << " ";               // Cetak nilai i
        }
    }
    cout << endl;                           // Pindah baris setelah selesai mencetak
}

// Prosedur untuk menampilkan semua bilangan dari 1 hingga maxInput
void tampilkanSemuaBilangan(int maxInput) {
    for (int i = 1; i <= maxInput; i++) {   // Loop dari 1 hingga maxInput
        cout << i << " ";                   // Cetak nilai i
    }
    cout << endl;                           // Pindah baris setelah selesai mencetak
}

// Fungsi untuk memvalidasi input integer positif
int inputValid() {
    int nilai;                               // Deklarasi variabel untuk menyimpan input
    while (true) {                           // Loop hingga input valid
        cout << "Masukkan nilai positif: ";  // Minta input dari pengguna
        cin >> nilai;                        // Baca input

        if (cin.fail() || nilai < 0) {       // Cek apakah input tidak valid atau negatif
            cout << "Input tidak valid! Harap masukkan integer positif.\n";
            cin.clear();                     // Hapus flag error pada cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Bersihkan buffer input
        } else {
            return nilai;                    // Kembalikan nilai jika valid
        }
    }
}

// Prosedur untuk menampilkan menu dan menjalankan opsi
void tampilkanMenu() {
    int pilihan, maxInput;                    // Deklarasi variabel pilihan dan maxInput

    // Tampilkan menu
    cout << "Menu:\n";
    cout << "1. Tampilkan bilangan ganjil\n";
    cout << "2. Tampilkan semua bilangan hingga nilai maksimal\n";
    cout << "3. Tampilkan bilangan ganjil tanpa 13\n";

    // Validasi input pilihan menu
    do {
        cout << "Pilih opsi (1, 2 atau 3): ";  // Minta pengguna memilih opsi
        cin >> pilihan;                        // Baca input pilihan

        if (cin.fail() || (pilihan != 1 && pilihan != 2 && pilihan != 3)) {  
            // Cek apakah input tidak valid atau bukan 1, 2, atau 3
            cout << "Pilihan tidak valid! Harap pilih 1 atau 2.\n";
            cin.clear();                       // Hapus flag error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Bersihkan buffer input
        }
    } while (pilihan != 1 && pilihan != 2 && pilihan != 3);  // Ulangi hingga pilihan valid

    maxInput = inputValid();  // Validasi input nilai maksimal

    cout << endl;             // Pindah baris
    switch (pilihan) {        // Jalankan fungsi berdasarkan pilihan
        case 1:
            tampilkanBilanganGanjil(maxInput);  // Panggil fungsi tampilkanBilanganGanjil
            break;
        case 2:
            tampilkanSemuaBilangan(maxInput);   // Panggil fungsi tampilkanSemuaBilangan
            break;
        case 3: 
            tampilkanBilanganGanjilTanpa13(maxInput);  // Panggil fungsi tampilkanBilanganGanjilTanpa13
            break;
    }
}

int main() {
    tampilkanMenu();           // Panggil prosedur tampilkanMenu
    return 0;                  // Kembalikan 0 untuk menunjukkan program berhasil dijalankan
}

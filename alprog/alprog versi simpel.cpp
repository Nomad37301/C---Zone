#include <iostream>  // Mengimpor pustaka untuk input-output standar
using namespace std;

int main() {
    int i, maxInput;  // Deklarasi variabel i dan maxInput

    // Meminta pengguna untuk memasukkan nilai maksimal
    cout << "Masukkan nilai maksimal yang Anda inginkan: ";
    cin >> maxInput;  // Membaca input dari pengguna dan menyimpannya ke maxInput
    cout << endl;  // Pindah baris untuk membuat tampilan lebih rapi

    // Loop while untuk mencetak semua bilangan hingga maxInput
    i = 0;  // Inisialisasi vaZriabel i
    cout << "semua bilangan nya adalah : " << endl; // cetak string
    while (i <= maxInput) {  // While loop terus berjalan hingga i <= maxInput
        for (; i <= maxInput; i++) {  // For loop untuk mencetak bilangan  
            cout <<  i << " ";  // Cetak nilai i diikuti spasi

        }
    }
    cout << endl << endl;  // Pindah baris setelah selesai mencetak

    // Loop while untuk mencetak bilangan ganjil
    i = 0;  // Reset nilai i ke 0
    cout << "bilangan ganjil nya : " << endl; // cetak string
    while (i <= maxInput) {  // While loop hingga i <= maxInput
        for (; i <= maxInput; i++) {  // For loop mencetak bilangan ganjil
            if (i % 2 != 0) {  // Cek apakah i adalah bilangan ganjil
                
                cout << i << " ";  // Cetak nilai i diikuti spasi
            }
        }
    }
    cout << endl << endl;  // Pindah baris setelah selesai mencetak

    // Loop while untuk mencetak bilangan ganjil kecuali 13
    i = 0; // Reset nilai i ke 0
    cout << "bilangan ganjil tanpa 13 nya : " << endl; // cetak string
    while (i <= maxInput) {  // While loop hingga i <= maxInput
        for (; i <= maxInput; i++) {  // For loop mencetak bilangan ganjil
            if (i % 2 != 0 && i != 13) {  // Cek apakah i adalah ganjil dan bukan 13
                cout <<  i << " ";  // Cetak nilai i diikuti spasi
            }
        }
    }
    cout << endl;  // Pindah baris setelah selesai mencetak

    return 0;  // Mengakhiri program dengan kode keberhasilan
}

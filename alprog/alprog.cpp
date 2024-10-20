#include <iostream> // Mendeklarasikan library iostream untuk melakukan input dan output
#include <string.h> // Menggunakan library string.h untuk operasi string

using namespace std; // Menggunakan namespace std untuk menghindari penggunaan std:: yang berulang

int main(){ // Fungsi utama programZ

    // Deklarasi variabel yang akan digunakan dalam program
    long long int nim; // Menggunakan variabel long long int untuk menampung data NIM yang bisa besar (10 digit)
    string nama; // Menggunakan variabel string untuk menampung nama yang umumnya panjang
    float berat_badan; // Menggunakan variabel float untuk menyimpan berat badan yang bisa bernilai desimal
    char jenis_kelamin, kelas_alporg; // Menggunakan variabel char untuk jenis kelamin dan kelas dengan nilai karakter

    cout << "Input nama : " << endl; // Menampilkan instruksi input untuk nama
    getline(cin, nama); // Mengambil input nama dari pengguna (dapat menampung spasi)

    cout << "Input nim : " << endl; // Menampilkan instruksi input untuk NIM
    cin >> nim; // Mengambil input NIM dari pengguna

    cout << "Input berat badan : " << endl; // Menampilkan instruksi input untuk berat badan
    cin >> berat_badan; // Mengambil input berat badan dari pengguna

    cout << "Input jenis kelamin : (L/P) " << endl; // Menampilkan instruksi input untuk jenis kelamin
    cin >> jenis_kelamin; // Mengambil input jenis kelamin dari pengguna (L/P)

    cout << "Kelas : (A,B,C,D)" << endl; // Menampilkan instruksi input untuk kelas
    cin >> kelas_alporg; // Mengambil input kelas dari pengguna
    cout << endl << endl << endl; // Menampilkan tiga baris kosong

    // Menampilkan data yang telah diinput oleh pengguna
    cout << "Nama : " << nama << endl; // Menampilkan nama yang diinput pengguna
    cout << "Nim : " << nim << endl; // Menampilkan NIM yang diinput pengguna
    cout << "berat badan : " << berat_badan << endl; // Menampilkan berat badan yang diinput pengguna
    cout << "Jenis kelamin : " << jenis_kelamin << endl; // Menampilkan jenis kelamin yang diinput pengguna

    // Mengecek input kelas yang sesuai dan menampilkan kelas yang diambil pengguna
    if (kelas_alporg == 'A') // Jika kelas yang diinput 'A'
    {
        cout << "Kelas : A"; // Menampilkan kelas A

    }
    else if (kelas_alporg == 'B') // Jika kelas yang diinput 'B'
    {
        cout << "Kelas : B"; // Menampilkan kelas B

    }
    else if (kelas_alporg == 'C') // Jika kelas yang diinput 'C'
    {
        cout << "Kelas : C"; // Menampilkan kelas C

    }
    else if (kelas_alporg == 'D') // Jika kelas yang diinput 'D'
    {
        cout << "Kelas : D"; // Menampilkan kelas D

    }
    else { // Jika input kelas tidak valid
        cout << "SALAH KELAS"; // Menampilkan pesan kesalahan kelas

    }

    cout << endl; // Menampilkan baris kosong

    return 0; // Mengakhiri program dan mengembalikan nilai 0
}

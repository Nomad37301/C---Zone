#include <iostream> // menggunakan library iostream =
#include <cmath> // menggunakan library math c++

using namespace std; //  menggunakan namespace standar


int main(){ // fugnsi utama kode 

    int pilihan, aSegi, tSegi, kalks, kalkl , JariL;// mendeklarasikan variabel yang akan digunakan

    cout << "masukan pilihan anda antara (1). menghitung luas segi tigas atau  (2) menghitung luas lingkaran : "; // mencetak pesan untuk meminta input user
    cin >> pilihan; // memasukan input user ke variabel pilihan


    switch (pilihan) // cek pilihan user pada variabel pilihan
    {
    case 1: // case bila pilihan user 1

        cout << "Masukan nilai alas segi tiga : ";  // mencetak string
        cin >>  aSegi; // memasukan input user ke var aSegi
        cout << endl; // newline agar rapi 

        cout << "Masukan nilai tinggi segitiga : "; // mencetak string
        cin  >> tSegi; // memasukkan input user ke vat tSegi

        kalks = aSegi * tSegi / 2; // rumus menghitung luas segitiga

        cout << "Hasil luas segi tiga adalah : " <<  kalks << endl; // mencetak hasil perhitungan luas segitiga
        break; // menghentikan switch case


    case 2: // case bila pilihan user 2

        cout << "Masukan nilai jari-jari lingkaran : "; // mencetak string
        cin >>  JariL; // memasukan input user ke var  JariL
        cout << endl; // mencetak newline untuk kerapian

        kalkl =  3.14 * pow(JariL, 2); // rumus mencari luas lingkaran

        cout << "Hasil luas lingkaran adalah : " << kalkl << endl; // mencetak hasil perhitungan 
        break; // menghentikan switch case

        default : // bila input user tidak sesuai dengan pilihan yang ada maka akan kesini
        cout << "Maaf pilihan anda salah silahkan coba lagi "; // mencetak pesan bila pilihan salah 
    }


    return 0; // untuk menghentikan program

}
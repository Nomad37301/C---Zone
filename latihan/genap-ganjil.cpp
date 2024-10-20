#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int i;

    cout << " Masukan angka yang ingin di cek : ";
    cin >> i;

    if (i%2==0)
    {
        cout << " Angka  yang anda masukan adalah genap ";

    }

    else
    {
        cout << " Angka yang anda masukan adalah ganjil";
    }
    
    return 0;
    
}
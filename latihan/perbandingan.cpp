#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int a, b;
    

    cout << "Masukan angka pertama :";
    cin >> a;

    cout << "Masukan angka kedua : ";
    cin >> b;

    if (a > b)
    {
        cout << "Angka pertama lebih besar";
    }

    else if (a < b)
    {
        cout << "Angka kedua lebih besar";
    }
    
    else
    {
        cout << "Angka yang dimasukan sama";
    }
    
    return 0;
    
}
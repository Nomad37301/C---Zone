#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){

    int i;

    cout << "Masukan angka yang ingin di cek : " << endl;
    cin >> i;

    if (i%3==0)
    {
        cout << "angka kelipatan 3";
    }
    
    else
    {
        cout << "angka bukan kelipatan 3";
    }
    
    return 0;
}
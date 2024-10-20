#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int nilai;

    cout << "Masukan nilai anda : ";
    cin >> nilai;

    if (nilai >= 85)
    {
        cout << " Anda mendapat nilai A ";
    }
    
    else if (nilai >= 70)
    {
        cout << " Anda mendapat nilai B";
    }
    
    else if (nilai >= 55)
    {
        cout << " Anda mendapat nilai C";
    }

    else
    {
        cout << " Anda gagal";
    }

    return 0;
    
}
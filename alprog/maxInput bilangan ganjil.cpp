#include <iostream>
using namespace std;

int main(){

    int maxInput, i;

    cout<< "Masukan nilai maks : ";
    cin >> maxInput;

    for (i = 0; i <= maxInput; i++)
    {
        if (i % 2 != 0)
        {
           cout << i << " ";
        }
        
    }

    return 0;
    
}
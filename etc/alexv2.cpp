#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

long double heronSqrt(long double num, long double tol = 1e-6) {
    long double guess = num / 2.0;
    int iteration = 0;
    

    cout << "Perulangan ke - \tTebakan\t\t\tTebakan baru" << endl;
    cout << "----------------------------------------------" << endl;

    while (true) {
        long double newGuess = (guess + num / guess) / 2.0;
        
        
        cout << iteration << "\t\t" << fixed << setprecision(6) << guess << "\t\t" << newGuess << endl;
        
        if (abs(newGuess - guess) < tol)
            break;

        guess = newGuess;
        iteration++;
    }
    
    return guess;
}

int main() {
    long double number;
    cout << "Masukan angka yang ingin dicari akarnya : ";
    cin >> number;
    
    long double result = heronSqrt(number);
    cout << "Akar dari " << number << " adalah sekitar: " << fixed << setprecision(6) << result << endl;
    
    return 0;
}

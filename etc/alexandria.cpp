#include <iostream>
#include <aclapi.h>
using namespace std;

double akarHeron(double n, double epsilon) {
    double x0 = n / 2; 
    double x1 = (x0 + n / x0) / 2;
sssss
    while (abs(x1 - x0) > epsilon) {
        x0 = x1;
        x1 = (x0 + n / x0) / 2;
    }

    return x1;
}

int main() {
    double bilangan = 25;
    double epsilon = 0.0001;

    double akar = akarHeron(bilangan, epsilon);
    cout << "Akar dari " << bilangan << " adalah: " << akar << endl;

    return 0;
}
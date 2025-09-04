#include <iostream>
using namespace std;

int main() {
    int base, exponent, result = 1;

    cout << "Enter base (a): ";
    cin >> base;
    cout << "Enter exponent (b): ";
    cin >> exponent;
    int count = 0;

    while (count < exponent) {
        result *= base;
        count++;
    }

    cout << base << "^" << exponent << " = " << result << endl;
    return 0;
}
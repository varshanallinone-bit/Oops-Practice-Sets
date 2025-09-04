#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    cout << "Digits in reverse order: ";
    do {
        int digit = num % 10;
        cout << digit;
        num = num / 10;
    } while (num != 0);

    cout << endl;
    return 0;
}
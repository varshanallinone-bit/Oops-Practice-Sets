#include <iostream>
using namespace std;

int main() {
    int num, digit, maxDigit = 0;
    cout << "Enter a positive integer: ";
    cin >> num;

    int temp = num;

    do {
        digit = temp % 10;
        if (digit > maxDigit)
            maxDigit = digit;
        temp /= 10;
    } while (temp != 0);

    cout << "The largest digit in " << num << " is: " << maxDigit << endl;

    return 0;
}
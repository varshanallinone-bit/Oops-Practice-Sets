#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    cout << "Enter an integer: ";
    cin >> num;
    int original = num;

    for (int temp = num; temp != 0; temp /= 10) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
    }

    if (original == reversed) {
        cout << num << " is a palindrome." << endl;
    }
    else {
        cout << num << " is not a palindrome." << endl;
    }
    return 0;
}
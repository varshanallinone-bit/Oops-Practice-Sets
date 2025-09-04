#include <iostream>
using namespace std;

int main() {
    int num, original_num, rem, result = 0;
    cout << "Enter an integer: ";
    cin >> num;

    original_num = num;

    int digits = 0;
    int temp = num;
    while (temp != 0) { //Counting the number of Digits
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        rem = temp % 10; 
        int power = 1;
        for (int i = 0; i < digits; ++i) {
            power *= rem;
        }

        result += power;
        temp /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
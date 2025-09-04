#include <iostream>
using namespace std;

int main() {
    int num = 0, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        sum += num % 10; //Adding the Last Digit to summing
        num /= 10; //Removing Last digit
    }
    cout << "Sum of digits: " << sum << endl;
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10; //taking the last digit and storing
        reversed = reversed * 10 + digit; //reversing the number 
        num /= 10; //Last digit took out
    }

    cout << "Reversed number: " << reversed << endl;
    
    return 0;
}
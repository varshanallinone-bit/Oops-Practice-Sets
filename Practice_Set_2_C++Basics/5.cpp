#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial NA" << endl;
    } 
    
    else {
        int i = 1;
        while (i <= num) {
            factorial *= i;
            i++;
        }
        cout << "Factorial of " << num << " is: " << factorial << endl;

    }
    return 0;
}
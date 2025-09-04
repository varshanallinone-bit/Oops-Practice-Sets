#include <iostream>
using namespace std;

int main() {
    int num = 1;
    cout << "Odd numbers between 1 and 50:\n";

    while (num <= 50) {
        if (num % 2 != 0) {
            cout << num << endl;
        }
        num++;
    }
    cout << endl;
    return 0;

}
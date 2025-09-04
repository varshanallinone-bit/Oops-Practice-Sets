#include <iostream>
using namespace std;

int main() {
    int n = 0;
    do {
        cout << "Enter a number : ";
        cin >> n;
    } while (n >= 0);

    cout << "You entered a negative number" << endl;
    return 0;
}
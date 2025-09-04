#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int first = 0, second = 1, next;

    cout << "Fibonacci sequence up to " << n << " terms:" << endl;

    for (int i = 1; i <= n; ++i) {
        cout << first << endl;
        next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int first = 0, second = 1, next;

    cout << "Fibonacci Series up to " << n << " terms:\n";

    for (int i = 1; i <= n; ++i) {
        cout << first << endl;
        next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter the number: ";
    cin >> a >> b;

    if (a > b) {
        cout << a << " is Larger";
    }

    else {
        cout << b << " is Larger";
    }
    return 0;
}
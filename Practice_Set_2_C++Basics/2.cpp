#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int number = 2;
    
    while (count < 10) {
        cout << number << endl;
        number += 2;  
        count++;
    }

    cout << endl;
    return 0;
}
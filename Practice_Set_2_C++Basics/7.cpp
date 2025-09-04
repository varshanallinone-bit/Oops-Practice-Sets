#include <iostream>
using namespace std;

int main() {
    int num;
    bool isprime = true;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 1) {
        isprime = false;
    } 
    
    else {
        for (int i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isprime = false;
                break;
            }
        }
    }

    if (isprime){
        cout << num << " is a prime number " << endl;
    }
    else{
        cout << num << " is composite" << endl;
    }
    return 0;
}
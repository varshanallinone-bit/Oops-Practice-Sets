#include <iostream>
using namespace std;

int main(){
    int a = 0, fact = 1;
    cout << "Enter the Number to Find Factorial: ";
    cin >> a;

    for (int i = 1; i <= a; i++){
        fact *= i;
    }
    cout << "Factorial of " << a << " is: " << fact;
    return 0;
}
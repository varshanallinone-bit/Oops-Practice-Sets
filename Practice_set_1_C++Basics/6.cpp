#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter the Number: ";
    cin >> a;
    cout << endl;
    for (int i = 1; i <= 10; i++){
        cout << a << " x " << i << " = " << (a*i) << endl;
    }

    return 0;
}
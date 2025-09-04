#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter an Integer: " << endl;
    cin >> a;

    if (a > 0){
        cout << "Entered number is Positive Integer";
    }
    else if (a < 0){
        cout << "Entered number is Negative Integer";
    }
    else if (a == 0){
        cout << "Entered number is equal to zero";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int a = 0, sum = 0;
    cout << "Enter the Number upto which to sum: " << endl;
    cin >> a;

    for (int i = 0; i <= a; i++){
        sum += i;
    }

    cout << "Sum of the Number: " << sum << endl;
    return 0;

}
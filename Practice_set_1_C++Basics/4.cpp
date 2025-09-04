#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "Enter 3 Numbers: ";
    cin >> a >> b >> c;
    int largest = a;

    if (b > largest){
        largest = b;
    }
    if (c > largest){
        largest = c;
    }
    cout << "Largest among all three is: " << largest;
    return 0;
}
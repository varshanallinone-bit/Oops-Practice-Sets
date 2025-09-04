#include <iostream>
using namespace std;

int main() {
    float principal, roi, time, SI;

    cout << "Enter Principal: ";
    cin >> principal;

    cout << "Enter ROI: ";
    cin >> roi;

    cout << "Enter Time (in years): ";
    cin >> time;

    SI = (principal * roi * time) / 100;

    cout << "Simple Interest = " << SI << endl;

    return 0;
}
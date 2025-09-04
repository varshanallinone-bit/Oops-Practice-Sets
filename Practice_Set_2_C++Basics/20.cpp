#include <iostream>
using namespace std;

int main() {
    int mark;
    int sum = 0, count = 0;

    cout << "Enter marks one by one (enter -1 to stop):" << endl;

    while (true) {
        cin >> mark;
        if (mark == -1)
            break;
        sum += mark;
        count++;
    }

    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Average of entered marks: " << average << endl;
    } else {
        cout << "No marks were entered." << endl;
    }

    return 0;
}
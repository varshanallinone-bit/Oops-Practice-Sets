#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;

    double D = (b * b) - (4 * a * c);  // Discriminant
    double realPart, imagPart;

    if (D > 0) {
        // Two distinct real roots
        double root1 = (-b + sqrt(D)) / (2 * a);
        double root2 = (-b - sqrt(D)) / (2 * a);
        cout << "Real and distinct roots exist." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } 
    
    else if (D == 0) {
        // Two equal real roots
        double root = -b / (2 * a);
        cout << "Real and equal roots exist." << endl;
        cout << "Root = " << root << endl;
    } 
    else {
        // Imaginary roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-D) / (2 * a);
        cout << "Imaginary roots exist." << endl;
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }
    return 0;


}
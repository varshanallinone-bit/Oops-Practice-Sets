#include <iostream>
using namespace std;

class Fraction {
    private:
        int numerator;
        int denominator;
        int gcd(int a, int b) const {
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        }

    public:
        Fraction() {
            numerator = 0;
            denominator = 1;
        }

        Fraction(int n) {
            numerator = n;
            denominator = 1;
        }
        Fraction(int n, int d) {
            numerator = n;
            denominator = (d == 0) ? 1 : d; // Avoid division by zero
            reduce();
        }

        void reduce() {
            int divisor = gcd(abs(numerator), abs(denominator));
            numerator /= divisor;
            denominator /= divisor;

            if (denominator < 0) {
                numerator = -numerator;
                denominator = -denominator;
            }
        }
        void display() const {
            cout << numerator << "/" << denominator << endl;
        }
};

int main() {
    Fraction f1;
    Fraction f2(5);
    Fraction f3(8, 12);

    cout << "Default Fraction: ";
    f1.display();
    cout << "Fraction with Numerator Only: ";
    f2.display();
    cout << "Fraction with Numerator and Denominator: ";

    f3.display();

    return 0;
}
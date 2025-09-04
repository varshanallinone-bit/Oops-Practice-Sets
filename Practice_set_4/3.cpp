#include <iostream>
using namespace std;

class Complex {
    private:
        int real;
        int imag;

    public:
        Complex()
        {
            real = 0;
            imag = 0;
        }
        Complex(int r) {
            real = r;
            imag = 0;
        }
        Complex(int r, int i){
            real = r;
            imag = i;
        }
        void display() const {
            cout << "Complex Number: " << real;
            if (imag >= 0)
                cout << " + " << imag << "i" << endl;
            else
                cout << " - " << -imag << "i" << endl;
        }
};

int main() {
    Complex c1;
    Complex c2(5);
    Complex c3(3, -7);

    
    cout << "Using Default Constructor:\n";
    c1.display();
    cout << "\nUsing One-Argument Constructor:\n";
    c2.display();
    cout << "\nUsing Two-Argument Constructor:\n";
    c3.display();

    return 0;
}
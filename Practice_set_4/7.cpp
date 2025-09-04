#include <iostream>
using namespace std;

class Distance {
    private:
        int feet;
        int inches;

    public:
        Distance() {
            feet = 0;
            inches = 0;
        }
        Distance(int f) {
            feet = f;
            inches = 0;
        }

        Distance(int f, int i) {
            feet = f;
            inches = i;
            normalize();
        }
        void normalize() {
            if (inches >= 12) {
                feet += inches / 12;
                inches = inches % 12;
            }
        }

        void display() const {
            cout << feet << " feet " << inches << " inches" << endl;
        }
};

int main() {
    Distance d1;
    Distance d2(5);
    Distance d3(6, 14);

    cout << "Default Distance: ";
    d1.display();
    cout << "Distance with Feet Only: ";
    d2.display();
    cout << "Distance with Feet and Inches: ";
    d3.display();

    return 0;
}
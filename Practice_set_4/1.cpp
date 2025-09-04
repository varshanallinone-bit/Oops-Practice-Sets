#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;
    public:
        Rectangle(int l, int b) {
            length = l;
            breadth = b;
        }

        int getArea() const {
            return length * breadth;
        }
};

int main() {
    Rectangle rect(10, 4);
    cout << "Area of Rectangle: " << rect.getArea() << " square units" << endl;

    return 0;
}
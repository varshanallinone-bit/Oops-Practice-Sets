#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int width;

    public:
        void setLength(int l) {
            length = l;
        }

        void setWidth(int w) {
            width = w;
        }

        int getLength() {
            return length;
        }
        int getWidth() {
            return width;
        }
        int calculateArea() {
            return length * width;
        }
    };

int main() {
    Rectangle rect;
    rect.setLength(10);
    rect.setWidth(40);
    cout << "Length: " << rect.getLength() << " units" << endl;
    cout << "Width: " << rect.getWidth() << " units" << endl;
    cout << "Area: " << rect.calculateArea() << " square units" << endl;

    return 0;
}
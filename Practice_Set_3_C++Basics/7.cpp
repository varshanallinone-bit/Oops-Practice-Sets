#include <iostream>
#include <cmath>
using namespace std;

class Circle {
    private:
        double radius;

    public:
        void setRadius(double r) {
            radius = r;
        }
        double getRadius() const {
            return radius;
        }
        double getArea() const {
            double r = getRadius();
            return M_PI * r * r;
        }
};

int main() {
    Circle c;
    c.setRadius(5.0);
    cout << "Radius: " << c.getRadius() << endl;
    cout << "Area: " << c.getArea() << endl;
    return 0;
}
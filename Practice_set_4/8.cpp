#include <iostream>
#include <string>
using namespace std;

class Car {
    private:
        string brand;
        string model;
        int price;
    public:
        Car(string b) {
            brand = b;
            model = "Unknown";
            price = 0;
        }
        Car(string b, string m) 
        {
            brand = b;
            model = m;
            price = 0;
        }
        Car(string b, string m, int p) {
            brand = b;
            model = m;
            price = p;
        }

        void display() const {
            cout << "Brand: " << brand << ", Model: " << model << ", Price: Rs. " << price << endl;
        }
};

int main() {
    Car c1("Audi");
    Car c2("VW", "Virtus GT");
    Car c3("BMW", "X5", 8900000);

    cout << "Car with Brand Only:" << endl;
    c1.display();
    cout << endl << "Car with Brand and Model:" << endl;
    c2.display();
    cout << endl << "Car with Brand, Model, and Price:" << endl;
    c3.display();

    return 0;
}
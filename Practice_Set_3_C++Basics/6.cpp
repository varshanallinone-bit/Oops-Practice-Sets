#include <iostream>
#include <string>
using namespace std;

class Car {
    private:
        string brand;
        string model;

    public:
        void setBrand(string b) {
            brand = b;
        }
        void setModel(string m) {
            model = m;
        }
        string getBrand() {
            return brand;
        }
        string getModel() {
            return model;
        }

        void displayDetails() {
            cout << "Brand: " << brand << ", Model: " << model << endl;
        }
    };

int main() {
    const int size = 3;
    Car cars[size];
    cars[0].setBrand("VW");
    cars[0].setModel("Virtus");

    cars[1].setBrand("Skoda");
    cars[1].setModel("Kylaq");

    cars[2].setBrand("Volvo");
    cars[2].setModel("Xc40");
    cout << "Car Details:\n";
    for (int i = 0; i < size; ++i) {
        cars[i].displayDetails();
    }

    return 0;
}
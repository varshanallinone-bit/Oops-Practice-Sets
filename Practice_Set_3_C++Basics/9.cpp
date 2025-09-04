#include <iostream>
using namespace std;

class Temperature {
    private:
        double celsius;

    public:
        void setCelsius(double c) {
            celsius = c;
        }
        double getFahrenheit() const {
            return (celsius * 9.0 / 5.0) + 32.0;
        }
};

int main() {
    Temperature temp;
    temp.setCelsius(37.0);
    cout << "Temperature in Fahrenheit: " << temp.getFahrenheit() << " Deg. F" << endl;

    return 0;
}
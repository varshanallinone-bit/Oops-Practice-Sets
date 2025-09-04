#include <iostream>
using namespace std;

class Time {
    private:
        int hours;
        int minutes;
        int seconds;
    public:
        Time() {
            hours = 0;
            minutes = 0;
            seconds = 0;
        }
        Time(int h, int m) {
            hours = h;
            minutes = m;
            seconds = 0;
        }
        Time(int h, int m, int s) {
            hours = h;
            minutes = m;
            seconds = s;
        }

        void display() const {
            cout << "Time: " 
                << hours << "h " 
                << minutes << "m " 
                << seconds << "s" << endl;
        }
};

int main() {
    Time t1;
    Time t2(10, 45);
    Time t3(6, 30, 15);

    cout << "Default Constructor:" << endl;
    t1.display();
    cout << endl << "Constructor with Hours and Minutes:" << endl;
    t2.display();

    cout << endl << "Constructor with Full Time:" << endl;
    t3.display();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        string name;
        int id;
        float salary;

    public:
        Employee(string n, int i) {
            name = n;
            id = i;
            salary = 0.0;
        }
        Employee(string n, int i, float s) {
            name = n;
            id = i;
            salary = s;
        }

        void display() const {
            cout << "Name: " << name << ", ID: " << id << ", Salary: ₹" << salary << endl;
        }
};

int main() {
    Employee e1("Aarav", 101);
    Employee e2("Meera", 102, 55000.75);

    cout << "Employee with Name and ID Only:\n";
    e1.display();
    cout << "\nEmployee with Name, ID, and Salary:\n";
    e2.display();

    return 0;
}
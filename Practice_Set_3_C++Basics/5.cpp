#include <iostream>
using namespace std;

class Employee {
    private:
        int id;
        int salary;

    public:
        void setId(int i) {
            id = i;
        }
        void setSalary(int s) {
            salary = s;
        }
        int getId() {
            return id;
        }
        int getSalary() {
            return salary;
        }
        void displayDetails() {
            cout << "Employee ID: " << id << ", Salary: Rs. " << salary << endl;
        }
};

int main() {
    Employee emp1, emp2, emp3;
    emp1.setId(101);
    emp1.setSalary(50000);
    emp2.setId(102);
    emp2.setSalary(60000);
    emp3.setId(103);
    emp3.setSalary(55000);

    cout << "Employee Details:\n";
    emp1.displayDetails();
    emp2.displayDetails();
    emp3.displayDetails();

    return 0;
}
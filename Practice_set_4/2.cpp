#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        string name;
        int age;
        int marks;

    public:
        Student() {
            name = "Unknown";
            age = 0;
            marks = 0;
        }

        Student(string n, int a, int m) {
            name = n;
            age = a;
            marks = m;
        }
        void display() const {
            cout << "Name: " << name << ", Age: " << age << ", Marks: " << marks << endl;
        }
};

int main() {
    Student s1;
    cout << "Default Constructor Output:\n";
    s1.display();

    Student s2("Sri", 21, 95);

    cout << "\nParameterized Constructor Output:\n";
    s2.display();

    return 0;
}
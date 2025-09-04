#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
        string name;
        int age;

    public:
        void setName(string n) {
            name = n;
        }
        void setAge(int a) {
            age = a;
        }
    
        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }
    };

int main() {
    Student s1;
    s1.setName("Sri");
    s1.setAge(21);

    cout << "Student Name: " << s1.getName() << endl;
    cout << "Student Age: " << s1.getAge() << endl;

    return 0;
}
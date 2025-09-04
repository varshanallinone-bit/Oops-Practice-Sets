#include <iostream>
using namespace std;

int main(){
    int marks = 0;
    cout << "Enter your Marks: ";
    cin >> marks;

    if (marks >= 90){
        cout << "Grade A";
    }
    else if (marks >= 80 && marks <= 89){
        cout << "Grade B";
    }
    else if (marks >= 70 && marks <= 79){
        cout << "Grade C";
    }
    else if (marks >= 60 && marks <= 69){
        cout << "Grade D";
    }
    else if (marks < 60){
        cout << "Grade F";
    }
    return 0;
    
}
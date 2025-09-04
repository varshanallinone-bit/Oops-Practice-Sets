#include <iostream>
using namespace std;

class BankAccount {
    private:
        int accountNumber;
        double balance;

    public:
        BankAccount() {
            accountNumber = 0;
            balance = 0.0;
        }
        BankAccount(int accNum) {
            accountNumber = accNum;
            balance = 0.0;
        }

        BankAccount(int accNum, double bal) {
            accountNumber = accNum;
            balance = bal;
        }


        void display() const {
            cout << "Account Number: " << accountNumber << ", Balance: Rs. " << balance << endl;
        }
};

int main() {
    BankAccount acc1;
    cout << "Default Constructor:\n";
    acc1.display();
    BankAccount acc2(1002);

    cout << "\nConstructor with Account Number:\n";
    acc2.display();
    BankAccount acc3(1003, 50000.75);
    cout << "\nConstructor with Account Number and Balance:\n";
    acc3.display();

    return 0;
}
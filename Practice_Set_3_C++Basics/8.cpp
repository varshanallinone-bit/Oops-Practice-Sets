#include <iostream>
using namespace std;

class Account {
    private:
        int accountNumber;
        double balance;

    public:
        void setAccountNumber(int accNum) {
            accountNumber = accNum;
        }
        void setBalance(double bal) {
            balance = bal;
        }
        int getAccountNumber() const {
            return accountNumber;
        }
        double getBalance() const {
            return balance;
        }
        void displayAccount() const {
            cout << "Account Number: " << getAccountNumber() << endl;
            cout << "Balance: Rs. " << getBalance() << endl;
        }
};

int main() {
    Account acc;
    acc.setAccountNumber(1001);
    acc.setBalance(25000.75);

    cout << "Account Details:\n";
    acc.displayAccount();

    return 0;
}
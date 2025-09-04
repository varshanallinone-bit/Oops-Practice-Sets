#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    void setBalance(int amount) {
        if (amount >= 0) {
            balance = amount;
        } 
        else {
            cout << "Error: Balance cannot be negative." << endl;
        }
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;

    account.setBalance(3000);
    cout << "Current Balance: Rs. " << account.getBalance() << endl;

    account.setBalance(-1000);
    cout << "Balance after invalid update: Rs. " << account.getBalance() << endl;

    return 0;
}
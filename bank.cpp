#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string owner;
    double balance;
public:
    BankAccount(string owner, double balance) {
        this->owner = owner;
        this->balance = balance;
        cout << "Account created for " << owner << " with balance " << balance << endl;
    }

    ~BankAccount() {
        cout << "Account of " << owner << " is closed." << endl;
    }

    void display() {
        cout << "Owner: " << owner << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("John Doe", 1000.50);
    account.display();
    return 0;
}


#include <iostream>
using namespace std;

class Account {
protected:
    int accNo;
    string name;
    double balance;

public:
    Account(int a, string n, double b) {
        accNo = a;
        name = n;
        balance = b;
    }

    virtual void deposit(double amt) {
        balance += amt;
    }

    virtual void withdraw(double amt) {
        if (amt > balance)
            throw "Insufficient Balance!";
        balance -= amt;
    }

    virtual void display() {
        cout << "\nAccount Number : " << accNo;
        cout << "\nAccount Holder : " << name;
        cout << "\nBalance        : " << balance << endl;
    }
};

class Savings : public Account {
public:
    Savings(int a, string n, double b) : Account(a, n, b) {}
};

class Current : public Account {
public:
    Current(int a, string n, double b) : Account(a, n, b) {}
};

int main() {
    int accNo, choice, type;
    string name;
    double balance, amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << "\n1. Savings Account\n2. Current Account\n";
    cout << "Choose Account Type: ";
    cin >> type;

    Account *acc;

    if (type == 1)
        acc = new Savings(accNo, name, balance);
    else
        acc = new Current(accNo, name, balance);

    try {
        cout << "\n1. Deposit\n2. Withdraw\nChoose Operation: ";
        cin >> choice;

        cout << "Enter Amount: ";
        cin >> amount;

        if (choice == 1)
            acc->deposit(amount);
        else if (choice == 2)
            acc->withdraw(amount);

        acc->display();
    }
    catch (const char *msg) {
        cout << "\nError: " << msg << endl;
    }

    delete acc;
    return 0;
}
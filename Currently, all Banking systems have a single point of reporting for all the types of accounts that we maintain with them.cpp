#include <iostream>
using namespace std;

class Account {
public:
    virtual void display() = 0;
};

class FD : virtual public Account {
protected:
    int fdID;
    int depositAmount;
    float interestRate;
    int months;
public:
    FD(int id, int amount, float rate, int m) {
        fdID = id;
        depositAmount = amount;
        interestRate = rate;
        months = m;
    }
    void display() override {
        cout << "Maturity Amount for the FD is: " << depositAmount * ((interestRate / 100) * months) << endl;
    }
};

class Savings : virtual public Account {
protected:
    int savingsAccountNumber;
    int initialBalance;
    int currentBalance;
public:
    Savings(int number, int balance) {
        savingsAccountNumber = number;
        initialBalance = balance;
        currentBalance = balance;
    }
    void deposit(int amount) {
        currentBalance += amount;
    }
    void withdraw(int amount) {
        if (amount <= currentBalance) {
            currentBalance -= amount;
        }
    }
    void display() override {
        cout << "Balance in the Savings is: " << currentBalance << endl;
    }
};

class Report : public FD, public Savings {
protected:
    int customerID;
public:
    Report(int fdID, int depositAmount, float interestRate, int months, int savingsAccountNumber, int initialBalance, int customerID)
        : FD(fdID, depositAmount, interestRate, months), Savings(savingsAccountNumber, initialBalance) {
        this->customerID = customerID;
    }
    void display() override {
        cout << "Customer Data" << endl;
        cout << "Customer ID: " << customerID << endl;
        FD::display();
        Savings::display();
        cout << "Withdrawable Account Balance for the customer: " << (depositAmount + currentBalance) << endl;
        cout << endl;
    }
};

int main() {
    int customerID, fdID, fdAmount, savingsAccountNumber, initialBalance, depositAmount, withdrawAmount;
    float interestRate;
    int months;

    cin >> customerID;
    cin >> fdID;
    cin >> fdAmount;
    cin >> interestRate;
    cin >> months;
    cin >> savingsAccountNumber;
    cin >> initialBalance;
    cin >> depositAmount;
    cin >> withdrawAmount;

    Report report(fdID, fdAmount, interestRate, months, savingsAccountNumber, initialBalance, customerID);
    report.display();

    report.deposit(depositAmount);
    report.display();

    report.withdraw(withdrawAmount);
    report.display();

    return 0;
}


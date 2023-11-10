#include <iostream>




using namespace std;




// Abstract Account class

class Account {

protected:

double balance;

public:

Account() : balance(0.0) {}

virtual void deposit(double amount) = 0;

virtual void withdraw(double amount) = 0;

virtual void displayBalance() = 0;

};




// SavingsAccount class derived from Account

class SavingsAccount : public Account {

public:

void deposit(double amount) override {

balance += amount;

cout << "Amount deposited: " << amount << endl;

}

void withdraw(double amount) override {

if (balance - amount >= 0) {

balance -= amount;

cout << "Amount withdrawn: " << amount << endl;

} else {

cout << "Insufficient funds. Withdrawal canceled." << endl;

}

}

void displayBalance() override {

cout << "Savings Account Balance: " << balance << endl;

}

};




// CheckingAccount class derived from Account

class CheckingAccount : public Account {

public:

void deposit(double amount) override {

balance += amount;

cout << "Amount deposited: " << amount << endl;

}

void withdraw(double amount) override {

if (balance - amount >= 0) {

balance -= amount;

cout << "Amount withdrawn: " << amount << endl;

} else {

cout << "Insufficient funds. Withdrawal canceled." << endl;

}

}

void displayBalance() override {

cout << "Checking Account Balance: " << balance << endl;

}

};




int main() {

// Create objects for savings and checking accounts

SavingsAccount savingsAccount;

CheckingAccount checkingAccount;




// Perform transactions

int choice;

double amount;




/*cout << "Banking System" << endl;

cout << "1. Deposit" << endl;

cout << "2. Withdraw" << endl;

cout << "3. Display Balance" << endl;

cout << "0. Exit" << endl;*/







do {

cin >> choice;




switch (choice) {

case 1:

cin >> amount;

savingsAccount.deposit(amount);

break;

case 2:

cin >> amount;

savingsAccount.withdraw(amount);

break;

case 3:

savingsAccount.displayBalance();

break;

case 0:

cout << "Exiting the program. Goodbye!";

break;

default:

cout << "Invalid choice. Please try again.";

}

} while (choice != 0);




return 0;

} 

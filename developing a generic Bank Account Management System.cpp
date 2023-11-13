#include <iostream>

template <class T>
class BankAccount {
private:
    T balance;
    T interestRate;

public:
    void setBalance(T b) {
        balance = b;
    }

    void setInterestRate(T r) {
        interestRate = r;
    }

    T getBalance() {
        return balance;
    }

    T getInterestRate() {
        return interestRate;
    }

    T calculateInterest() {
        return balance * interestRate / 100;
    }
};

int main() {
    BankAccount<int> account;
    int initialBalance, interestRate;

    std::cin >> initialBalance >> interestRate;

    account.setBalance(initialBalance);
    account.setInterestRate(interestRate);

    int balanceAfterOneYear = account.getBalance() + account.calculateInterest();
    int interestEarned = account.calculateInterest();

    std::cout << "Balance after one year: " << balanceAfterOneYear << std::endl;
    std::cout << "Interest earned after one year: " << interestEarned << std::endl;

    return 0;
}


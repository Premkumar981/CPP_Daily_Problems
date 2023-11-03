#include<bits/stdc++.h>
#include<string>
using namespace std;

class Account
{
public:
    virtual void display() = 0;
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
};

 
class savingsAccount : public Account
{
    int accno;
    double balance;
    string name;

public:
    void get()
    {
        cin >> accno >> name >> balance;
    }
    void deposit(double amount)
    {
        balance = (balance + amount);
        cout << "Balance after deposit: " << fixed << setprecision(2) << balance << "\n";
    }
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = (balance - amount);
            cout << "Balance after withdrawal: " << fixed << setprecision(2) << balance << "\n";
        }
        else
        {
            cout << "Insufficient balance for withdrawal!\n";
        }
    }
    void display()
    {
        cout << accno << " " << name << " " << fixed << setprecision(2) << balance << "\n";
    }
};

int main()
{
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        savingsAccount s;
        s.get();
        s.display();

        int option;
        double amount;
        cin >> option;
        if (option == 2)
        {
            cin >> amount;
            s.deposit(amount);
        }
        else if (option == 3)
        {
            cin >> amount;
            s.withdraw(amount);
        }
        else
        {
            cout << "Invalid option\n";
        }

        s.display();
    }
}

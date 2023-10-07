#include <iostream>
#include <string>

using namespace std;

class partA {
protected:
    string name;
    string pan;

public:
    partA(string name, string pan) : name(name), pan(pan) {}

    void display() {
        cout << "Account Holder Name: " << name << endl;
        cout << "PAN: " << pan << endl;
    }
};

class partB : public partA {
protected:
    int gross_salary;
    int income_other_sources;

public:
    partB(string name, string pan, int gross_salary, int income_other_sources)
        : partA(name, pan), gross_salary(gross_salary), income_other_sources(income_other_sources) {}

    void display() {
        partA::display();
        cout << "Gross Salary: " << gross_salary << endl;
        cout << "Income from Other Sources: " << income_other_sources << endl;
    }
};

class partC : public partA {
protected:
    int deductions;

public:
    partC(string name, string pan, int deductions) : partA(name, pan), deductions(deductions) {}

    void display() {
        //partA::display();
        cout << "Deductions: " << deductions << endl;
    }
};

class taxComp : public partB, public partC {
public:
    taxComp(string name, string pan, int gross_salary, int income_other_sources, int deductions)
        : partB(name, pan, gross_salary, income_other_sources), partC(name, pan, deductions) {}

    void display() {
        partB::display();
        partC::display();

        int taxable_income = gross_salary + income_other_sources - deductions;
        int tax_payable = 0.3 * taxable_income;

        cout << "Taxable Income (computed): " << taxable_income << endl;
        cout << "Tax Payable (computed): " << tax_payable << endl;
    }
};

int main() {
    string name, pan;
    int gross_salary, income_other_sources, deductions;

    // Prompt the user for input
    getline(cin, name);
    getline(cin, pan);
    cin >> gross_salary;
    cin >> income_other_sources;
    cin >> deductions;
    cin.ignore(); // Ignore the newline character

    // Create the taxComp object and display the output
    taxComp tax_form(name, pan, gross_salary, income_other_sources, deductions);
    cout << "Income Tax Calculation" << endl;
    tax_form.display();

    return 0;
}


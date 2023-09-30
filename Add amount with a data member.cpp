#include <iostream>
using namespace std;

class AddAmount {
private:
    int amount;
public:
    AddAmount() {
        amount = 50;
    }
    int getAmount() {
        return amount;
    }
};

int main() {
    AddAmount piggyBank;
    cout << piggyBank.getAmount() << endl;
    return 0;
}


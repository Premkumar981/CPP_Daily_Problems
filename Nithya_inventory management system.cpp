#include <iostream>
using namespace std;

class Shop
{
protected:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    Shop() { counter = 0; } // Constructor to initialize the counter

    virtual void setPrice(int id, int price)
    {
        itemId[counter] = id;
        itemPrice[counter] = price;
        counter++;
    }

    void displayPrice(int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
        }
    }
};

class ConcreteShop : public Shop
{
public:
    void setPrice(int id, int price) override
    {
        itemId[counter] = id;
        itemPrice[counter] = price;
        counter++;
    }
};


int main()
{
    ConcreteShop dukaan;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int id, price;
        cin >> id;
        cin >> price;
        dukaan.setPrice(id, price);
    }

    dukaan.displayPrice(n);

    return 0;
}

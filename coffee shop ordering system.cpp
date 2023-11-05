#include <iostream>

using namespace std;




class CoffeeShop {

public:

virtual void calculateTotal() = 0;




virtual ~CoffeeShop() {}

};




class CustomerOrder : public CoffeeShop {

private:

float coffeePrice;

float teaPrice;

float pastryPrice;

int coffeeQuantity;

int teaQuantity;

int pastryQuantity;




public:

CustomerOrder(float cPrice, float tPrice, float pPrice, int cQuantity, int tQuantity, int pQuantity) {

coffeePrice = cPrice;

teaPrice = tPrice;

pastryPrice = pPrice;

coffeeQuantity = cQuantity;

teaQuantity = tQuantity;

pastryQuantity = pQuantity;

}




void calculateTotal() override {

float total = (coffeePrice * coffeeQuantity) + (teaPrice * teaQuantity) + (pastryPrice * pastryQuantity);

cout << "Total cost of the order is $" << total << endl;

}

};




int main() {

float coffeePrice, teaPrice, pastryPrice;

int coffeeQuantity, teaQuantity, pastryQuantity;




cin >> coffeePrice;

cin >> coffeeQuantity;

cin >> teaPrice;

cin >> teaQuantity;

cin >> pastryPrice;

cin >> pastryQuantity;




CoffeeShop* order = new CustomerOrder(coffeePrice, teaPrice, pastryPrice, coffeeQuantity, teaQuantity, pastryQuantity);

order->calculateTotal();

delete order;




return 0;

} 

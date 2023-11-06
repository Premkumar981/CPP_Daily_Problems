#include <iostream>

#include <iomanip>

#include <cmath>




class Product {

public:

// Abstract method to calculate the total price

virtual double calculateTotalPrice() const = 0;

};




// Derived class representing an electronics product

class Electronics : public Product {

private:

double price;

double discount;




public:

// Constructor

Electronics(double price, double discount) : price(price), discount(discount) {}




// Implementation of calculateTotalPrice for Electronics

double calculateTotalPrice() const override {

double discountedPrice = price - (price * (discount / 100.0));

return roundToTwoDecimalPlaces(discountedPrice);

}




private:

// Helper function to round off to two decimal places

double roundToTwoDecimalPlaces(double value) const {

return std::round(value * 100.0) / 100.0;

}

};




// Derived class representing an apparel product

class Apparel : public Product {

private:

double price;

double tax;




public:

// Constructor

Apparel(double price, double tax) : price(price), tax(tax) {}




// Implementation of calculateTotalPrice for Apparel

double calculateTotalPrice() const override {

double totalPrice = price + (price * (tax / 100.0));

return roundToTwoDecimalPlaces(totalPrice);

}




private:

// Helper function to round off to two decimal places

double roundToTwoDecimalPlaces(double value) const {

return std::round(value * 100.0) / 100.0;

}

};




int main() {

double electronicsPrice, electronicsDiscount, apparelPrice, apparelTax;




// Get input from the user for electronics price and discount

std::cin >> electronicsPrice;

std::cin >> electronicsDiscount;




// Get input from the user for apparel price and tax

std::cin >> apparelPrice;

std::cin >> apparelTax;




// Create objects of derived classes

Electronics electronics(electronicsPrice, electronicsDiscount);

Apparel apparel(apparelPrice, apparelTax);




// Calculate and display the total prices

std::cout << std::fixed << std::setprecision(2); // Set precision to 2 decimal places

std::cout << electronics.calculateTotalPrice() << std::endl;

std::cout << apparel.calculateTotalPrice();




return 0;

} 

#include <iostream>

#include <iomanip>




// Abstract class representing an Investment

class Investment {

public:

virtual double calculateReturns() const = 0;




void displayInvestmentDetails() const {

displaySpecificInvestmentDetails();

std::cout << std::fixed << std::setprecision(2);

std::cout << "Returns: " << calculateReturns() << "%" << std::endl;

}




private:

// Abstract method to display specific investment details

virtual void displaySpecificInvestmentDetails() const = 0;

};




// Concrete class representing a Stock investment

class Stock : public Investment {

private:

double initialInvestment;

double finalValue;




public:

// Constructor

Stock(double initialInvestment, double finalValue) : initialInvestment(initialInvestment), finalValue(finalValue) {}




// Implementation of calculateReturns for Stock

double calculateReturns() const override {

return ((finalValue - initialInvestment) / initialInvestment) * 100.0;

}




private:

// Implementation of displaySpecificInvestmentDetails for Stock

void displaySpecificInvestmentDetails() const override {

std::cout << "Type: Stock" << std::endl;

std::cout << std::fixed << std::setprecision(2);

std::cout << "Initial Investment: " << initialInvestment << std::endl;

std::cout << "Final Value: " << finalValue << std::endl;

}

};




// Concrete class representing a Bond investment

class Bond : public Investment {

private:

double initialInvestment;

double finalValue;




public:

// Constructor

Bond(double initialInvestment, double finalValue) : initialInvestment(initialInvestment), finalValue(finalValue) {}




// Implementation of calculateReturns for Bond

double calculateReturns() const override {

return ((finalValue - initialInvestment) / initialInvestment) * 100.0;

}




private:

// Implementation of displaySpecificInvestmentDetails for Bond

void displaySpecificInvestmentDetails() const override {

std::cout << "Type: Bond" << std::endl;

std::cout << "Initial Investment: " << initialInvestment << std::endl;

std::cout << "Final Value: " << finalValue << std::endl;

}

};




int main() {

double initialInvestment, finalValue;




// Get input from the user for Stock investment details

std::cin >> initialInvestment;

std::cin >> finalValue;




// Create a Stock object

Stock stock(initialInvestment, finalValue);




// Display the investment details and returns

stock.displayInvestmentDetails();




std::cout << std::endl;




// Get input from the user for Bond investment details

std::cin >> initialInvestment;

std::cin >> finalValue;




// Create a Bond object

Bond bond(initialInvestment, finalValue);




// Display the investment details and returns

bond.displayInvestmentDetails();




return 0;

} 

#include <iostream>
#include <iomanip>

class CurrencyConverter {
private:
    double usDollars;
    double conversionRate;

public:
    CurrencyConverter(double rate) : conversionRate(rate) {}

    void convert(double dollars) {
        usDollars = dollars;
    }

    double getEuros() {
        return usDollars * conversionRate;
    }
};

int main() {
    double conversionRate, usDollars;
    std::cin >> conversionRate >> usDollars;

    CurrencyConverter converter(conversionRate);
    converter.convert(usDollars);

    double euros = converter.getEuros();

    std::cout << "Converted amount in Euros (EUR): " << std::fixed << std::setprecision(2) << euros << " EUR" << std::endl;

    return 0;
}


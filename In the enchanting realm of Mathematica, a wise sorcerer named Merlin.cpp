#include <iostream>

// Function to calculate the greatest common divisor (GCD) using Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int den) {
        int common = gcd(num, den);
        numerator = num / common;
        denominator = den / common;
    }

    Fraction operator*(const Fraction& other) const {
        int num = numerator * other.numerator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    void printFraction() const {
        std::cout << "The result of multiplication is: " << numerator << "/" << denominator << std::endl;
    }
};

int main() {
    int num1, den1, num2, den2;
    std::cin >> num1 >> den1 >> num2 >> den2;

    Fraction fraction1(num1, den1);
    Fraction fraction2(num2, den2);
    Fraction result = fraction1 * fraction2;

    result.printFraction();

    return 0;
}


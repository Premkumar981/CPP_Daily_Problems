#include <iostream>
#include <vector>
#include <iomanip>

class Product {
public:
    std::string name;
    std::vector<double> ratings;

    Product(const std::string& productName) : name(productName) {}

    void addRating(double rating) {
        ratings.push_back(rating);
    }

    double calculateAverageRating() {
        double sum = 0.0;
        for (double rating : ratings) {
            sum += rating;
        }
        return ratings.empty() ? 0.0 : sum / ratings.size();
    }

    void displayProductDetails() {
        std::cout << "Product Details:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Average Rating: " << calculateAverageRating() << std::endl;
    }
};

int main() {
    std::string productName;
    int numRatings;
    
    // Input product name
    std::getline(std::cin, productName);

    // Input number of ratings
    std::cin >> numRatings;
    
    // Clear the newline character from the input buffer
    std::cin.ignore();

    // Create a Product object
    Product product(productName);

    // Input ratings and add them to the product
    for (int i = 0; i < numRatings; ++i) {
        double rating;
        std::cin >> rating;
        product.addRating(rating);
    }

    // Display product details
    product.displayProductDetails();

    return 0;
}


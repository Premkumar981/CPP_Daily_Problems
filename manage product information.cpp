#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    float price;
    Product** relatedProducts;
    int numRelatedProducts;
    int maxRelatedProducts;

public:
    Product(std::string productName, float productPrice) : name(productName), price(productPrice), numRelatedProducts(0), maxRelatedProducts(10) {
        relatedProducts = new Product*[maxRelatedProducts];
        for (int i = 0; i < maxRelatedProducts; ++i) {
            relatedProducts[i] = nullptr;
        }
    }

    ~Product() {
        delete[] relatedProducts;
    }

    void addRelatedProduct(Product* relatedProduct) {
        if (numRelatedProducts >= maxRelatedProducts) {
            return;
        }

        relatedProducts[numRelatedProducts++] = relatedProduct;
    }

    void removeRelatedProduct(Product* relatedProduct) {
        int index = -1;
        for (int i = 0; i < numRelatedProducts; ++i) {
            if (relatedProducts[i] == relatedProduct) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            return;
        }
        for (int i = index; i < numRelatedProducts - 1; ++i) {
            relatedProducts[i] = relatedProducts[i + 1];
        }

        relatedProducts[numRelatedProducts - 1] = nullptr;
        --numRelatedProducts;
    }

    void findFrequentlyBoughtTogether() {
        std::cout << "Products frequently bought together with " << name << ":\n";
        for (int i = 0; i < numRelatedProducts; ++i) {
            std::cout << "- " << relatedProducts[i]->name << "\n";
        }
    }

    void displayProductDetails() {
        std::cout << "Product Name: " << name << "\n";
        std::cout << "Price: $" << price << "\n";
    }
};

int main() {
    int numProducts;
    std::cin >> numProducts;
    std::cin.ignore();
    Product** products = new Product*[numProducts];

    for (int i = 0; i < numProducts; ++i) {
        std::string name;
        float price;
        std::getline(std::cin, name);
        std::cin >> price;

        std::cin.ignore();

        products[i] = new Product(name, price);

        char choice;
        do {
            std::cin >> choice;
            std::cin.ignore();

            if (choice == 'y' || choice == 'Y') {
                std::string relatedName;
                float relatedPrice;
                std::getline(std::cin, relatedName);
                std::cin >> relatedPrice;
                std::cin.ignore();
                Product* relatedProduct = new Product(relatedName, relatedPrice);
                products[i]->addRelatedProduct(relatedProduct);
            }
        } while (choice == 'y' || choice == 'Y');
    }

    for (int i = 0; i < numProducts; ++i) {
        products[i]->findFrequentlyBoughtTogether();
        std::cout << "\n";
    }

    for (int i = 0; i < numProducts; ++i) {
        delete products[i];
    }
    delete[] products;
    return 0;
}

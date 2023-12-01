#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;

public:

    Product(string pname, double pprice, int pquantity) {
        name = pname;
        price = pprice;
        quantity = pquantity;
    }
    void addToCart(int quantityToAdd) {
        quantity += quantityToAdd;
    }
    double calculateTotalBill() {
        return price * quantity;
    }
    void displayCartContents() {
        cout << "Product Name: " << name << endl;
        cout << "Price per item: $" << price << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

int main() {
    string productName;
    double productPrice;
    int productQuantity;
    getline(cin, productName);
    cin >> productPrice;
    cin >> productQuantity;
    Product product(productName, productPrice, productQuantity);
    int quantityToAdd;
    cin >> quantityToAdd;
    product.addToCart(quantityToAdd);
    product.displayCartContents();
    cout << "Total Bill: $" << product.calculateTotalBill() << endl;

    return 0;
}

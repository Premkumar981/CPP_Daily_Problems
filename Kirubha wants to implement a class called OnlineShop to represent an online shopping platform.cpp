#include <iostream>
#include <vector>
#include <string>

using namespace std;

class OnlineShop {
private:
    string shopName;
    vector<string> productCatalog;
    vector<float> prices;

public:
    OnlineShop(string name, int catalogSize) {
        shopName = name;
        productCatalog.resize(catalogSize);
        prices.resize(catalogSize);
    }

    void addProduct(string productName, float productPrice, int index) {
        productCatalog[index] = productName;
        prices[index] = productPrice;
    }

    void searchProduct(string productName) {
        int index = -1;
        for (int i = 0; i < productCatalog.size(); ++i) {
            if (productCatalog[i] == productName) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            cout << "Product found: " << productCatalog[index] << "; Price: " << prices[index] << endl;
        } else {
            cout << "Product not found." << endl;
        }
    }

    void displayProducts() {
        cout << "Available products:" << endl;
        for (int i = 0; i < productCatalog.size(); ++i) {
            cout << productCatalog[i] << " " << prices[i] << endl;
        }
    }
};

int main() {
    string shopName;
    int catalogSize;

    getline(cin, shopName);
    cin >> catalogSize;
    cin.ignore();  // Clear the newline character from the input buffer

    OnlineShop shop(shopName, catalogSize);

    for (int i = 0; i < catalogSize; ++i) {
        string productName;
        float productPrice;

        getline(cin, productName);
        cin >> productPrice;
        cin.ignore();  // Clear the newline character from the input buffer

        shop.addProduct(productName, productPrice, i);
    }

    string searchProductName;
    getline(cin, searchProductName);

    shop.searchProduct(searchProductName);
    shop.displayProducts();

    return 0;
}


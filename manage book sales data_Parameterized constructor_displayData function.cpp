#include <iostream>
#include <iomanip> // for setprecision
using namespace std;

class SalesData {
public:
    int unitsSold;
    double totalRevenue;

    // Parameterized constructor
    SalesData(double revenue, int units) : totalRevenue(revenue), unitsSold(units) {}

    // Function to display sales data
    void displayData() {
        cout << "Units Sold: " << unitsSold << endl;
        cout << "Revenue Generated: " << fixed << setprecision(2) << totalRevenue << endl;
        cout << "Average Price: " << fixed << setprecision(2) << (totalRevenue / unitsSold) << endl;
    }
};

int main() {
    double revenue;
    int units;
    
    cin >> revenue >> units; // Input total revenue and units sold

    SalesData sales(revenue, units); // Create an instance of the SalesData class

    sales.displayData(); // Display sales data

    return 0;
}


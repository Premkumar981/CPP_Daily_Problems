#include <iostream>

template <typename T>
T calculateTotalRevenue(T bookings[], int n) {
    T totalRevenue = 0;
    for (int i = 0; i < n; i++) {
        totalRevenue += bookings[i];
    }
    return totalRevenue;
}

int main() {
    int n;
    std::cin >> n;
    
    double bookings[n];
    for (int i = 0; i < n; i++) {
        std::cin >> bookings[i];
    }
    
    double totalRevenue = calculateTotalRevenue(bookings, n);
    std::cout << totalRevenue << std::endl;
    
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Device {
public:
    string deviceType;
    
    Device(string type) : deviceType(type) {
        cout << "Device Constructor: Initializing a " << deviceType << endl;
    }

    ~Device() {
        cout << "Device Destructor: Destroying a " << deviceType << endl;
    }
};

class Smartphone : public Device {
public:
    string brand;

    Smartphone(string phoneBrand) : Device("Smartphone"), brand(phoneBrand) {
        cout << "Smartphone Constructor: Setting up " << brand << " smartphone" << endl;
    }

    ~Smartphone() {
        cout << "Smartphone Destructor: Turning off " << brand << " smartphone" << endl;
    }
};

class Laptop : public Device {
public:
    string brand;

    Laptop(string laptopBrand) : Device("Laptop"), brand(laptopBrand) {
        cout << "Laptop Constructor: Booting up " << brand << " laptop" << endl;
    }

    ~Laptop() {
        cout << "Laptop Destructor: Shutting down " << brand << " laptop" << endl;
    }
};

int main() {
    string phoneBrand, laptopBrand;
    cin >> phoneBrand;
    Smartphone myPhone(phoneBrand);
    cin >> laptopBrand;
    Laptop myLaptop(laptopBrand);
    return 0;
}


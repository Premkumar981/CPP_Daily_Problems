#include <iostream>
#include <string>
using namespace std;

class PoweredDevice {
protected:
    int power;

public:
    void setPower(int p) {
        power = p;
    }
};

class Scanner : virtual public PoweredDevice {
protected:
    string scannerName;

public:
    void setScannerName(string name) {
        scannerName = name;
    }

    void display() {
        cout << "Power: " << power << " Scanner: " << scannerName;
    }
};

class Printer : virtual public PoweredDevice {
protected:
    string printerName;

public:
    void setPrinterName(string name) {
        printerName = name;
    }

    void display() {
        cout << "Power: " << power << " Printer: " << printerName;
    }
};

class Copier : public Scanner, public Printer {
public:
    void display() {
        cout << "Power: " << power << " Scanner: " << scannerName << " Printer: " << printerName;
    }
};

int main() {
    int choice;
    cin >> choice;

    if (choice == 1) {
        string scannerName, printerName;
        int power;
        cin >> scannerName >> printerName >> power;

        Copier copier;
        copier.setScannerName(scannerName);
        copier.setPrinterName(printerName);
        copier.setPower(power);

        copier.display();
    } else if (choice == 2) {
        string printerName;
        int power;
        cin >> printerName >> power;

        Printer printer;
        printer.setPrinterName(printerName);
        printer.setPower(power);

        printer.display();
    } else if (choice == 3) {
        string scannerName;
        int power;
        cin >> scannerName >> power;

        Scanner scanner;
        scanner.setScannerName(scannerName);
        scanner.setPower(power);

        scanner.display();
    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}


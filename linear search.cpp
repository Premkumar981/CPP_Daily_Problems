#include <iostream>
using namespace std;
int main() {
    int key, i, a[8], loc = -1;
    cout << "Enter array elements: ";
    
    for (i = 0; i < 8; i++)
        cin >> a[i];
    
    cout << "Enter the key you want to find: ";
    cin >> key;
    
    for (i = 0; i < 8; i++) {
        if (key == a[i]) {
            loc = i;
            break;
        }
    }

    if (loc == -1) {
        cout << "Not Found";
    } else {
        cout << "Found at " << loc + 1;
    }

    return 0;
}

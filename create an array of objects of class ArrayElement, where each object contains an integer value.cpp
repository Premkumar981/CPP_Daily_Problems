#include <iostream>

using namespace std;

class ArrayElement {
public:
  int value;
};

int main() {
  int n;
  cin >> n;

  ArrayElement arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i].value;
  }

  int srch_num;
  cin >> srch_num;

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i].value == srch_num) {
      count++;
    }
  }

  if (count > 0) {
    cout << "The number " << srch_num << " appears " << count << " times" << endl;
  } else {
    cout << "The number " << srch_num << " is not found in the array." << endl;
  }

  return 0;
}


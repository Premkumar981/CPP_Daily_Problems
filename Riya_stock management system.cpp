#include <iostream>
#include <algorithm>

int main() {
  // Get the size of the array from the user
 // std::cout << "Enter the size of the array: ";
  int size;
  std::cin >> size;

  // Allocate memory for the array using dynamic memory allocation
  int* array = new int[size];

  // Get the elements of the array from the user
 // std::cout << "Enter the elements of the array: ";
  for (int i = 0; i < size; i++) {
    std::cin >> array[i];
  }

  // Replace every element in the array with the sum of its previous and next element
  int temp = array[0];
  array[0] = array[1];
  for (int i = 1; i < size - 1; i++) {
    int sum = temp + array[i + 1];
    temp = array[i];
    array[i] = sum;
  }
  array[size - 1] = temp;

  // Print the modified array
  std::cout << "Modified array: ";
  for (int i = 0; i < size; i++) {
    std::cout << array[i] << " ";
  }
  std::cout << std::endl;

  // Deallocate the memory for the array
  delete[] array;

  return 0;
}

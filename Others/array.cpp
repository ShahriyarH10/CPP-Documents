#include <iostream>

using namespace std;

int main() {
  int index;
  char letter;

  // Declare an array that holds the letters of the English alphabet
  char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

  // Take the index as input
  cout << "Enter an index: ";
  cin >> index;

  // Check if the index is valid
  if (index < 0 || index >= 26) {
    cout << "Invalid index." << endl;
    return 1;
  }

  // Get the letter from the array
  letter = alphabet[index];

  // Output the letter
  cout << "The letter at index " << index << " is " << letter << endl;

  return 0;
}

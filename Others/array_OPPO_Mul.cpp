#include <iostream>
using namespace std;

int main() {
    int arr1[6];
    double arr2[6];
    double ProArr[6];

    for (int i = 0; i < 6; i++) {
        cout << "Enter the " << i + 1 << "th index " << "integer Number: ";
        cin >> arr1[i];
    }

    cout << endl;

    for(int i = 0; i < 6; i++) {
        cout << "Enter the " << i + 1 << "th index " << "decimal Number: ";
        cin >> arr2[i];
    }

    cout << endl << endl;

    // Multiplication
    for(int i = 0; i < 6; i++) {
        ProArr[i] = arr1[i] * arr2[5-i];
    }
    cout << endl;

    for(int i = 0; i < 6; i++) {

        cout << "The Products of INTEGER and DECIMAL Numbers: " << ProArr[i] << endl;
    }

    cout << endl;
    return 0;
}
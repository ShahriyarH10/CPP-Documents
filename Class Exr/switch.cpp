#include <iostream>
using namespace std;

int main() {
    char choice;
    cin >> choice;
    switch (choice) {
        case 'Y':
            cout << "Yes";
            break;
        case 'M':
            cout << "Maybe";
            break;
        case 'N':
            cout << "NO" ;
            break;
        default:
            cout << "Invalid response"; 

    }
}
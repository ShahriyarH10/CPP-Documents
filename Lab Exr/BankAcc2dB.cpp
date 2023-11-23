#include <iostream>
using namespace std;

int main() {
    string bankAcc[2][2] = {{},{}};

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 1; j++) {
            cout << "Enter " << i + 1 << "th" << " Account Name: ";
            cin >> bankAcc[i][j];
            cout << "Enter Money: ";
            cin >> bankAcc[i][j];
            cout << endl;
            
        }
    }
}

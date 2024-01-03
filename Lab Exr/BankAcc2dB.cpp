#include <iostream>
using namespace std;

int main() {
    string bankAcc[2][2] = {{},{}};

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << "Enter " << i + 1 << "th" << " Account Name and Money: ";
            cin >> bankAcc[i][j];
            
        }
        cout << endl;
    }
    cout << "1th Account Name: " << bankAcc[0][0] << endl;
    cout << "1th Acount Money: " << bankAcc[0][1] << endl;
    cout << "2nd Account Name: " << bankAcc[1][0] << endl;
    cout << "2nd Account Money: " << bankAcc[1][1] << endl; 
}

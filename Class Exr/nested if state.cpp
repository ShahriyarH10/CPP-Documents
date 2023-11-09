#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter value of A: " << endl;
    cin >> a;

    cout << "Enter value of B: " << endl;
    cin >> b;

    cout << "Enter value of C: " << endl;
    cin >> c;

    if(a > b) {
        if(a > c) {
            cout << "A is Greatest";
        }
        else {
            cout << "C is Greatest";
        }
    }
    else {
        if(b > c) {
            cout << "B is Greatest";
        }
        else {
            cout << "C is Greatest";
        }
    }
}
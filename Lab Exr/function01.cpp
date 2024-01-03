#include <iostream>
using namespace std;

int a, b, c;

void Addition() {
    c = a + b;
    cout << c << endl;
}

void Subtraction() {
    c = a - b;
    cout << c << endl;
}

void Multiplication() {
    c = a * b;
    cout << c << endl;
}

void Division() {
    c = a / b;
    cout << c << endl;
}

int main() {
   
    cout << "Enter 1st Number: ";
    cin >> a;
    cout << "Enter 2nd Number: ";
    cin >> b;

    Addition();
    Subtraction();
    Multiplication();
    Division();

    return 0;
}

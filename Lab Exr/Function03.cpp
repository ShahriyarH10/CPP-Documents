#include <iostream>
using namespace std;

int num1, total;
char op;

int sub() {
    total = total - num1;
    return total;
}

void calculate() {
    cout << "Do you want to perform a calculation? (y/n): ";
    cin >> op;

    if(op == 'y' || op == 'y') {
        cout << "Enter number 1: ";
        cin >> num1;
        cout << "Subtraction is: " << sub() << endl << endl;

        if (total <= 0) {
            cout << "The program is end" << endl;
        } else if (op == 'y' || op == 'y') {
            calculate();
        } else {
            cout << "The program is end" << endl;
        }

    } else {
        cout << "The program is end" << endl;
    }
}

int main() {
    cout << "Enter total number: ";
    cin >> total;
    calculate();
}
#include <iostream>
using namespace std;

char op;
int a, b, c;
char input;

int Addition() {
    c = a + b;
    return c;
}

int Subtraction() {
    c = a - b;
    return c;
}

int Multiplication() {
    c = a * b;
    return c;
}

int Division() {
    c = a / b;
    return c;
}

void calculetor() {
    cout << "Do you want to perform a calculation? (y/n): ";
    cin >> input;

    if(input == 'y' || input == 'Y'){
        cout << "Enter your operator such as +, -, *, /: ";
        cin >> op;

        if (op == '+') {
            cout << "Enter your 1st number: ";
            cin >> a;
            cout << "Enter your 2nd number: ";
            cin >> b;

            cout << "Addition is " << Addition() << endl;
        } else if (op == '-') {
            cout << "Enter your 1st number: ";
            cin >> a;
            cout << "Enter your 2nd number: ";
            cin >> b;

            cout << "Subtraction is " << Subtraction() << endl;
        } else if (op == '*') {
            cout << "Enter your 1st number: ";
            cin >> a;
            cout << "Enter your 2nd number: ";
            cin >> b;

            cout << "Multiplication is " << Multiplication() << endl;
        } else if (op == '/') {
            cout << "Enter your 1st number: ";
            cin >> a;
            cout << "Enter your 2nd number: ";
            cin >> b;

            cout << "Division is " << Division() << endl;
        } else {
            cout << "Error! Operator is not correct" << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> input;

        if (input == 'y' || input == 'Y') {
            calculetor();
        } else {
            cout << "Task has finished" << endl;
        }

    } else {
        cout << "Task has finished" << endl;
    }
}

int main() {
    calculetor();
    return 0;
}

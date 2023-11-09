/* Program to evaluate simple expresstions
of the form number operator number*/

#include <iostream>
using namespace std;

int main() {
    float v1, v2;
    char operator1;
    cout << "Type in your expression" << endl;
    cin >> v1;
    cin >> operator1;
    cin >> v2;

    if (operator1 == '+') {
        cout << v1 + v2 << endl;
    }
    else if (operator1 == '-') {
        cout << v1 - v2 << endl;
    }
    else if (operator1 == '*') {
        cout << v1 * v2 << endl;
    }
    else if (operator1 == '/') {
        cout << v1 / v2 << endl;
    }
    else {
        cout << "Unknown operator";
    }
    return 0;


}

#include <iostream>
using namespace std;

void addition(int a, int b) {
    int result = a + b;
    cout << "result = " << result << endl;
}

void subtrction(int a, int b) {
    int result = a - b;
    cout << "result = " << result << endl;
}

void multiplication(int a, int b) {
    int result = a * b;
    cout << "result = " << result << endl;
}

void division(int a, int b) {
    float result = (float) a / b;
    cout << "result = " << result << endl;
}

int main() {
    addition(10, 20);
    subtrction(10, 10);
    multiplication(30, 40);
    division(20, 40);

    cout << "All function have called";
}
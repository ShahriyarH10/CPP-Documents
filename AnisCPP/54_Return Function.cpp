#include <iostream>
using namespace std;

int addition(int a, int b) {
    int sum = a + b;
    return sum;
}

double additionD(double a, double b) {
    double sum = a + b;
    return sum;
}

int main() {
    int result = addition(10, 49);
    cout << result << endl;
    double sum = additionD(39.4, 34.9);
    cout << sum << endl;
}
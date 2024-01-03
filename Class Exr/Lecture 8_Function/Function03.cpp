#include <iostream>
using namespace std;

void f1(float x) {
    int n = 6;
    cout << x + n << endl;
}

int f2(void) {
    float n = 10;
    cout << n << endl;
}

int main() {
    int n = 5;
    f1(3);
    f2();
    return 0;
}
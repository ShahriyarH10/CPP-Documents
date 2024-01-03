#include <iostream>
using namespace std;

int x;

void f1() {
    x++;
}

void f2() {
    x++;
}

int main() {
    x = 7;
    f1();
    f2();
    cout << "x = " << x << endl;
}

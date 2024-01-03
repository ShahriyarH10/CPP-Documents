#include <iostream>
using namespace std;

void gcd (int u, int v) {
    int temp;
    while(v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }
    cout << u << endl;
}

int main() {
    int x = 10, y = 15;
    gcd(x, y);
    cout << "x = " << x << " y = " << y;
    return 0;
}
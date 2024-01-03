#include <iostream>
using namespace std;

int gcd(int u, int v) {
    int temp;
    while(v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }
    return u;
}

int main() {
    int result;
    result = gcd(150, 35);
    cout << "The gcd of 150 and 35 is " << result << endl;
    result = gcd (1026, 405);
    cout << "The gcd of 1026 and 405 is " << result << endl;
    cout << "The gcd of 83 and 240 is " << gcd(83, 240) << endl;
    return 0; 
}
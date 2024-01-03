#include <iostream>
using namespace std;

void sum(int x, int y) {
    int add = x + y;
    cout << add << endl;
}

void sum(int x, int y, int z) {
    int add = x + y + z;
    cout << add << endl;
}

void sum(int x) {
    cout << x << endl;
}

void sum(double x) {
    cout << x << endl;
}

int main() {
    sum(30, 39);
    sum(30, 24, 34);
    sum(30);
    sum(34.53);

}
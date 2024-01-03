#include <iostream>
using namespace std;

void swap(int *px, int *py) {
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

int main() {
    int a = 3, b = 5;
    swap(&a, &b);
    cout << "a: " << a << ", b: " << b << endl;
    return 0;
}

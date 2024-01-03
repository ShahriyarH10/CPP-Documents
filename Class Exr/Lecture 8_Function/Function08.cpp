#include <iostream>
using namespace std;

void multiplyBy2(float array[], int n) {
    int i;
    for(i = 0; i < n; ++i) {
        array[i] *= 2;
    }
}

int main() {
    float floatVals[4] = {1.2f, -3.7f, 6.2f, 8.55f};
    int i;
    multiplyBy2(floatVals, 4);
    for(i = 0; i < 4; ++i) {
        cout << floatVals[i] << endl;
    }
    return 0;
}
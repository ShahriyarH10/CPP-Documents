#include <iostream>
using namespace std;

int minimum(int values[], int numberOfElements) {
    int minValue, i;
    minValue = values[0];
    for(i = 1; i < numberOfElements; ++i) {
        if(values[i] < minValue) {
            minValue = values[i];
        }
    }
    return minValue;
}

int main() {
    int array1[5] = {157, -28, -37, 26, 10};
    int array2[7] = {12, 45, 1, 10, 5, 3, 22};
    cout << "array1 minimum: " << minimum(array1, 5) << endl;
    cout << "array2 minimum: " << minimum(array2, 7) << endl;
    return 0;
}
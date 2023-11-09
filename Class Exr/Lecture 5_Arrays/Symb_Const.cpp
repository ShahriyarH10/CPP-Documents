#include <iostream>
#define N 6
using namespace std;

int main() {
    int values[N];
    int index;

    for(index = 1; index < N; index++) {
        cout << "Enter value of element " << index << endl;
        cin >> values[index];
    }
    for(index = 0; index < N; index++) {
        cout << "values[" << index << "] = " << values[index] << endl;
    }
    return 0;
}

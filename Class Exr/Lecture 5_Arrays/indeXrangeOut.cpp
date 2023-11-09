#include <iostream>
using namespace std;

int main() {
    int NA, NB;
    cout << "Enter NA and NB" << endl;
    cin >> NA >> NB;

    int b[NB], a[NA];
    int index;
    
    for(index = 0; index < NB; index++) {
        b[index] = 10 + index;
    }
    for(index = 0; index < NA + 2; index++) {
        a[index] = index;
    }
    for(index = 0; index < NA + 2; index++) {
        cout << "b [" << index << "] = " << b[index] << endl;

    }
    return 0;
}
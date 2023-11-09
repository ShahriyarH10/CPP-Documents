#include <iostream>
using namespace std;

int main() {
    int i;
    int j;
    for(int i = 1; i <= 10; i++) {
        cout << "\n";
        for(j = 1; j <= i; j++)
        cout <<"*";
        cout << endl;
    }
}
#include <iostream>
using namespace std;

void square(int n){
    int result = n*n;
    cout << "square of " << n << " = " << result << endl;
}

int main() {
    square(8);
    square(5);
    square(6);
}
#include <iostream>
using namespace std;

void maxi(int n1, int n2) {
    if(n1 > n2) {
        cout << "The larger number is : " << n1 << endl;
    }
    else {
        cout << "The larger number is : " << n1 << endl;
    }
}

int main() {
    int n1;
    int n2;
    cout << "Enter the first number ";
    cin >> n1;
    cout << "Enter the second number ";
    cin >> n2;

    maxi(n1, n2);
}
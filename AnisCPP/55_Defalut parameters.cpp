#include <iostream>
using namespace std;

void display(int a = 10, int b = 20) {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl; 
}

void displayD(int a, int b = 20) {
    cout << "c = " << a << endl;
    cout << "d = " << b << endl; 
}

int main() {
    display();
    display(25);
    cout << endl;
    displayD(30);
}
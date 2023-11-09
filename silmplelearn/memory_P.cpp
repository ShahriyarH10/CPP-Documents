#include <iostream>
using namespace std;

int main() {
    int *ptr1;
    int *ptr2;
    int *ptr3;
    int avg;

    ptr1 = new int;
    ptr2 = new int;
    ptr3 = new int;

    cout << "Enter first Number: ";
    cin >> *ptr1;

    cout << "Enter the second Number: ";\
    cin >> *ptr2;

    cout << "Enter the third Number: ";
    cin >> *ptr3;

    avg = (*ptr1 + *ptr2 + *ptr3) / 3;

    cout << "Average is: " << avg << endl;
    delete ptr1;
    delete ptr2;
    delete ptr3;
}
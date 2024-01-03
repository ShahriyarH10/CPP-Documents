#include <iostream>
using namespace std;

double Area;

double calculateRectangleArea(double Length, double Width) {
    Area = Length * Width;
    return Area;
}

double calculateCircleArea(double Radius) {
    double pi = 3.14159;
    Area = pi * Radius * Radius;
    return Area;
}

double calculateTriangleArea(double Base, double Height) {
    Area = .5 * Base * Height;
    return Area;
}

int main() {
    int op;
    double Length, Width, Base, Height, Radius;
    cout << "1. Rectangle Area" << endl;
    cout << "2. Cicle Area" << endl;
    cout << "3. Triangle Area" << endl;
    cout << "   Enter Option: ";
    cin >> op;
    cout << endl;

    switch(op) {
        case 1:
            cout << "Enter Length: ";
            cin >> Length;
            cout << "Enter Width: ";
            cin >> Width;
            cout << "Rectangle Area: ";
            cout << calculateRectangleArea(Length, Width) << endl;
        break;
        case 2:
            cout << "Enter Radius: ";
            cin >> Radius;
            cout << "Cicle Area: ";
            cout << calculateCircleArea(Radius) << endl;
        break;
        case 3:
            cout << "Enter Base: ";
            cin >> Base;
            cout << "Enter Height: ";
            cin >> Height;
            cout << "Triangle Area: ";
            cout << calculateTriangleArea(Base, Height) << endl;
        break;
        default:
            cout << "Invaild Input";
        break;
    }
}
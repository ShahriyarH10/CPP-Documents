#include <iostream>
using namespace std;

class Box {
    public:
        static int objectCount;
        Box(double l, double b, double h) {
            cout << "Constructor called." << endl;
            length = l;
            breadth = b;
            heigth = h;
            objectCount++;
        }
        double Volume() {
            return length * breadth * heigth;
        }
        private:
            double length;
            double breadth;
            double heigth;
};

int Box::objectCount = 0;

int main() {
    Box Box1(3.3, 1.2, 1.5);
    Box Box2(8.5, 6.0, 2.0);

    cout << "Volume of Box1: " << Box1.Volume() << endl;
    cout << "Total object: " << Box::objectCount << endl;

    return 0;
}
#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int breadth;
    public:
        void setDimesion(int l, int b) {
            length = l;
            breadth = b;
        }
        int getArea() {
            return length * breadth;
        }
        Rectangle() {
            cout << "Constructor" << endl;
        }
        ~Rectangle() {
            cout << "Destructor" << endl;
        }
};

int main() {
    Rectangle rt;
    rt.setDimesion(7, 4);
    cout << rt.getArea() << endl;
    return 0;
}
#include <iostream>
using namespace std;

class Point {
    private:
        int x;
    public:
        void setx(int a) {
            this -> x = a;
        }
};

int main() {
    Point obj1, obj2;

    obj1.setx(10);
    obj2.setx(30);
    return 0;
}
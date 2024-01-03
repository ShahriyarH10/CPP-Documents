#include <iostream>
using namespace std;

class A {
    public:
        int x;
        A(int value) {
            x = value;
        }
};

int main() {
    const A a(10);
    return 0;
}

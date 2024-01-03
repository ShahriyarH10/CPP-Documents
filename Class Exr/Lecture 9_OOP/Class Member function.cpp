#include <iostream>
using namespace std;

class starWars {
public:
    int i;
    starWars(int x) {
        i = x;
    }
    void falcon() const {
        cout << "Falcon has left the base" << endl;
    }
    int gamma() {
        cout << ++i << endl;
        return i;
    }
};

int main() {
    starWars objOne(10);
    const starWars objTwo(20);
    objOne.falcon();
    objTwo.falcon();
    cout << objOne.i << " " << objTwo.i << endl;
    objOne.gamma();
}

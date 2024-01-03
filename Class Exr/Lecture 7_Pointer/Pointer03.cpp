#include <iostream>
using namespace std;

int main() {
    int *ip = nullptr;
    
    if (ip != nullptr) {
        cout << *ip << endl;
    } else {
        cout << "ip is a null pointer." << endl;
    }

    if (ip) {
        cout << *ip << endl;
    } else {
        cout << "ip is a null pointer." << endl;
    }
    
    return 0;
}

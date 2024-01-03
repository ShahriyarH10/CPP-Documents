#include <iostream>
using namespace std;

int main() {
    int count = 10;
    int *ip;
    ip = &count;

    cout << "count = " << count << ", *ip = " << *ip << endl;
    *ip = 4;
    cout << "count = " << *ip << ", *ip = " << count << endl;

    return 0;
}

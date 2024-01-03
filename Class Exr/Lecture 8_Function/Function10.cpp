#include <iostream>
using namespace std;

void auto_static() {
    int autoVar = 1;
    static int staticVar = 1;
    cout << "automatic = " << autoVar << " " << "static = " << staticVar;
    ++autoVar;
    ++staticVar; 
}

int main() {
    int i;
    for(i = 0; i < 5; ++i) {
        auto_static(); 
        cout << endl;
    }
    return 0;
}
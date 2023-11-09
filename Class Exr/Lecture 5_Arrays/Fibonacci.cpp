#include <iostream>
using namespace std;

int main() {
    int Fibonacci[13], i;
    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for(i = 2; i < 13; i++) {
        Fibonacci[i] = Fibonacci[i - 2] + Fibonacci[i - 1];

    }
    for(i = 0; i < 13; i++) {
        cout << "Fibonacci [" << i << "] = " << Fibonacci[i] << endl;
    }

    if(Fibonacci[13] % 2 == 0){
        cout << "even";
    }
    else {
        cout << "odd";
    }
    return 0;
}

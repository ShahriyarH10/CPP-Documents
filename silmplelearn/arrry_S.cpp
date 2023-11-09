#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int coupon[6] = {5, 8, 7, 3, 9, 1};

    for(int i = 0; i < 6; i++){
        cout << coupon[i] << endl;
        sum += coupon[i];
    }
    cout << sum << endl;
}
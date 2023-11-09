#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    bool test = true;

    while(test) {
        cout << "Enter number: ";
        cin >> num;

        if(num == 0) {
            test = false;
        }
        else {
            sum += num;
        }
    }

    cout << endl;

    cout << "Total: " << sum << endl;
}

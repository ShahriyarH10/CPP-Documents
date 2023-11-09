#include <iostream>
using namespace std;

int main() {
    int money;
    int sum = 0;

    for(int i = 1; i <= 5; i++) {
        cout << "Take money: ";
        cin >> money;
        sum += money;
    }

    cout << endl;

    /*for(int i = 1; i <= 5; i++) {
        cout << "Money Taken From Person: " << i << endl;

    }*/

    cout << endl;

    cout << "Total amount of Money " << sum << endl;
}

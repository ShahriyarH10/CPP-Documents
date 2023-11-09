#include <iostream>
using namespace std;

int main() {
    int i, money[25];
    int sum = 0;

    for(int i = 0; i < 25; i++) {
        cout << "Take money: $";
        cin >> money[i];
    }


    for(int i = 0; i < 25; i++){
        sum += money[i];
    }
    cout << "Total money: $" << sum << endl;
    cout << endl;

    cout << "To know the amount of money From Person: ";
    cin >> i;

    cout << endl;
    cout << "Money Taken From Person" << "[" << i << "]" << " = " << "$"<< money[i] << endl;
}

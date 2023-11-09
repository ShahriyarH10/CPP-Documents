#include <iostream>
using namespace std;

int main() {
    int totalAmount = 0;
    int deMoney = 0, wiMoney = 0, trMoney = 0;
    int n;

    do {
        switch (n){

        case 1:

            cout << "Enter your Deposit amount: ";
            cin >> deMoney;

            if(deMoney > 0) {
                totalAmount += deMoney;
                cout << "You have successfully Deposit your money" << endl;
            } else {
                cout << "Invalid Amount" << endl;
            }
            cout << "Thank you for Banking with us" << endl;
            cout << endl;
            break;

        case 2:

            cout << "Enter your Withdraw amount: ";
            cin >> wiMoney;

            if(wiMoney > 0 && (wiMoney <= totalAmount)) {
                totalAmount -= wiMoney;
                cout << "You have successfully withdrawn." << endl;
            } else {
                cout << "You have insufficient amount." << endl;
            }
            cout << "Thank you for Banking with us." << endl;
            cout << endl;
            break;

        case 3:

            cout << "Enter your Transfer amount: ";
            cin >> trMoney;

            if(trMoney > 0 && (trMoney <= totalAmount)) {
                totalAmount -= trMoney;
                cout << "Your money is transfering..." << endl;
            } else {
                cout << "You have insufficient amount." << endl;
            }
            cout << "Thank you for Banking with us." << endl;
            cout << endl;
            break;

        case 4:

            cout << "Your remaining balance: " << totalAmount << endl << endl;
            break;

        case 5:

            cout << "Here is your recent Transactions..." << endl;
            if(deMoney > 0) {
                cout << "Deposit Money: " << deMoney << endl;
            } else {
                cout << "Deposit Money: " << 0 << endl;
            }

            if(wiMoney > 0) {
                cout << "Withdraw Money: " << wiMoney << endl;
            } else {
                cout << "Withdraw Money: " << 0 << endl;
            }

            if(trMoney > 0) {
                cout << "Transfer Money: " << trMoney << endl;
            } else {
                cout << "Transfer Money: " << 0 << endl;
            }
            cout << endl;
            break;

        default:
            break;
        }
        // to run this loop infitne times do not put i++ or increment
        cout << "[1] Deposit Money..." << endl;
        cout << "[2] Withdraw Money..." << endl;
        cout << "[3] Transfer Money..." << endl;
        cout << "[4] Check balance..." << endl;
        cout << "[5] Checking Your Recent Transactions..." << endl;
        cout << "    Enter Option: ";
        cin >> n;
        cout << endl;
    } while(1);


    /*for(int i = 1; i <= 5;) {
        cout << "1. Withdrawing Money..." << endl;
        cout << "2. Transfer Money..." << endl;
        cout << "3. Checking Your Recent Transactions..." << endl;
        cout << "Enter Option: ";
        cin >> i;
        cout << endl;
        switch (i)
        {
        case 1:
            cout << "Enter your amount: ";
            cin >> amount[0];
            totalAmount -= amount[0];
            cout << endl;
            break;
        case 2:
            cout << "Enter your amount: ";
            cin >> amount[2];
            totalAmount -= amount[2];
            cout << "Your money is transfering..." << endl << endl;
            break;
        case 3:
            cout << "Here is your recent Transactions..." << endl;
            cout << "Withdraw Money: " << amount[0] << endl;
            cout << "Transfer Money: " << amount[2] << endl << endl;
            break;
        default:
            break;
        }
    }*/

}

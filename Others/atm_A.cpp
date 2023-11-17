#include <iostream>
using namespace std;

int main() {
    int totalAmount = 0;
    const int MAX_TRANSACTIONS = 100;
    int deMoney[MAX_TRANSACTIONS] = {};
    int wiMoney[MAX_TRANSACTIONS] = {};
    int trMoney[MAX_TRANSACTIONS] = {};
    int n;



    for(int currentIndex = 0; currentIndex < MAX_TRANSACTIONS; currentIndex++) {
        cout << "[1] Deposit Money..." << endl;
        cout << "[2] Withdraw Money..." << endl;
        cout << "[3] Transfer Money..." << endl;
        cout << "[4] All Transaction History..." << endl;
        cout << "[5] Check balance..." << endl;
        cout << "[6] Checking Your Recent Transactions..." << endl;
        cout << "[7] Exit" << endl; 
        cout << "    Enter Option: ";
        cin >> n;
        cout << endl;
        switch (n) {

            case 1:
                cout << "Enter your Deposit amount: ";
                cin >> deMoney[currentIndex];

                if (deMoney[currentIndex] > 0) {
                    totalAmount += deMoney[currentIndex];
                    cout << "You have successfully deposited your money" << endl;

                } else {
                    cout << "Invalid Amount" << endl;
                }
                cout << "Thank you for Banking with us" << endl;
                cout << endl;
                break;

            case 2:
                cout << "Enter your Withdraw amount: ";
                cin >> wiMoney[currentIndex - 1];

                if (wiMoney[currentIndex - 1] > 0 && (wiMoney[currentIndex - 1] <= totalAmount)) {
                    totalAmount -= wiMoney[currentIndex - 1];
                    cout << "You have successfully withdrawn." << endl;
                } else {
                    cout << "You have insufficient amount." << endl;
                }
                cout << "Thank you for Banking with us." << endl;
                cout << endl;
                break;

            case 3:
                cout << "Enter your Transfer amount: ";
                cin >> trMoney[currentIndex - 2];

                if (trMoney[currentIndex - 2] > 0 && (trMoney[currentIndex - 2] <= totalAmount)) {
                    totalAmount -= trMoney[currentIndex - 2];
                    cout << "Your money is transferring..." << endl;
                } else {
                    cout << "You have insufficient amount." << endl;
                }
                cout << "Thank you for Banking with us." << endl;
                cout << endl;
                break;

            case 4:
                if ((deMoney[MAX_TRANSACTIONS] > 0) ||  (wiMoney[MAX_TRANSACTIONS] && wiMoney[MAX_TRANSACTIONS] <= totalAmount) || (trMoney[MAX_TRANSACTIONS] && trMoney[MAX_TRANSACTIONS] <= totalAmount)) {
                    
                    for(int i = 0; i < currentIndex; i++) {
                            
                        if(deMoney[i] > 0) {
                            cout << "Here is your recent Transactions..." << endl;
                            cout << i << " Deposit Money: " << deMoney[i] << endl;
                        }

                        if(wiMoney[i] > 0 && wiMoney[i] <= totalAmount) {
                            cout << i << " Withdraw Money: " << wiMoney[i] << endl;
                        }

                        if(trMoney[i] > 0 && trMoney[i] <= totalAmount) {
                            cout << i << " Transfer Money: " << trMoney[i] << endl << endl;
                        }
                    }   
                } else {
                    cout << "NO TRANSACTION!" << endl;
                }
                
                cout << endl;
                break;

            case 5:
                cout << "Your remaining balance: " << totalAmount << endl << endl;
                break;

            case 6:
                cout << "All Transaction History:" << endl << endl;

                    cout << "All Deposit History: " << endl;
                    for(int i = 0; i < MAX_TRANSACTIONS; i++){
                        if (deMoney[i] > 0) {
                            cout << i << " Deposit Money: " << deMoney[i] << endl;
                        }
                    }
                    cout << endl;

                    cout << "All Withdraw History: " << endl;
                    for(int i = 0; i < MAX_TRANSACTIONS; i++){
                        if (wiMoney[i] > 0 && wiMoney[i] <= totalAmount) {
                            cout << i << " Withdraw Money: " << wiMoney[i] << endl;
                        }
                    }
                    cout << endl;

                    cout << "All Transfer History: " << endl;
                    for(int i = 0; i < MAX_TRANSACTIONS; i++){
                        if (trMoney[i] > 0 && trMoney[i] <= totalAmount) {
                            cout << i << " Transfer Money: " << trMoney[i] << endl;
                        }
                    }
                    cout << endl;

                cout << endl;
                break;
            case 7:
                cout << "Thank you for banking with us!" << endl << endl;
                break;

            default:
                cout << "Invalid Option" << endl << endl;
                break;
        }
        if(n == 7) {
            break;
        }
    }
    return 0;
}

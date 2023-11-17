#include <iostream>
using namespace std;

int main() {
    string AccNam;
    int wiMoney, deMoney, op;
    int AccNum;
    int totalAmount = 0;
    bool test = true;

    cout << "Enter your account name: ";
    cin >> AccNam;
    cout << "Enter your account number: ";
    cin >> AccNum;
    cout << "Enter your starting amount: \u09F3";
    cin >> totalAmount;
    cout << endl;

    while (test) {
        cout << "1. Withdraw Money" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. View Account Details" << endl;
        cout << "4. Close Menu and Exit" << endl;
        cout << "   Enter your Option: ";
        cin >> op;

        cout << endl;

        switch (op) {

            case 1:
                cout << "Enter the amount you want to withdraw: \u09F3";
                cin >> wiMoney;

                if (wiMoney > totalAmount) {
                    cout << "Insufficient funds. Please enter a valid amount." << endl << endl ;
                } else {
                    totalAmount -= wiMoney;
                    cout << "Successfully withdrawn \u09F3" << wiMoney << endl << endl;

                    if (totalAmount == 0) {
                        cout << "Your account balance has reached 0. Please deposit money to continue using your account." << endl << endl;
                    }
                }
                break;

            case 2:
                cout << "Enter the amount you want to deposit: \u09F3";
                cin >> deMoney;

                if (deMoney > 1000) {
                    cout << "You cannot deposit more than 1000 at once. Please enter a valid amount." << endl << endl;
                } else if (totalAmount + deMoney > 10000) {
                    cout << "Your account balance has reached 10000. You cannot deposit money." << endl << endl;
                } else {
                    totalAmount += deMoney;
                    cout << "Successfully deposited \u09F3" << deMoney << endl << endl;
                }
                break;

            case 3:
                cout << "Account Name: " << AccNam << endl;
                cout << "Account Number: " << AccNum << endl;
                cout << "Current Amount: \u09F3" << totalAmount << endl;
                cout << endl;
                break;

            case 4:
                cout << "Thank you for banking us!" << endl << endl;
                test = false;
                break;

            default:
                cout << "Invalid Option..." << endl << endl;
                break;
        }
    }
    return 0;
}
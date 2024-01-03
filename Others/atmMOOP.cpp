#include <iostream>
using namespace std;

class ATMachine {
private:
    int balance;
    int withdrawalAmount;
    int transferAmount;

public:
    ATMachine() {
        balance = 0;
        withdrawalAmount = 0;
        transferAmount = 0;
    }

    void depositMoney(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "You have successfully deposited your money" << endl;
        } else {
            cout << "Invalid Amount" << endl;
        }
        cout << "Thank you for Banking with us" << endl;
        cout << endl;
    }

    void withdrawMoney(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "You have successfully withdrawn." << endl;
        } else {
            cout << "You have insufficient amount." << endl;
        }
        cout << "Thank you for Banking with us." << endl;
        cout << endl;
    }

    void transferMoney(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Your money is transferring..." << endl;
        } else {
            cout << "You have insufficient amount." << endl;
        }
        cout << "Thank you for Banking with us." << endl;
        cout << endl;
    }

    void checkBalance() {
        cout << "Your remaining balance: " << balance << endl << endl;
    }
};

int main() {
    ATMachine atm;
    int n;
    bool run = true;

    while (run) {
        cout << "[1] Deposit Money..." << endl;
        cout << "[2] Withdraw Money..." << endl;
        cout << "[3] Transfer Money..." << endl;
        cout << "[4] Check balance..." << endl;
        cout << "[5] Checking Recent Transaction..." << endl;
        cout << "[6] Exit" << endl;
        cout << "    Enter Option: ";
        cin >> n;
        cout << endl;

        switch (n) {
            case 1:
                int depositAmount;
                cout << "Enter your Deposit amount: ";
                cin >> depositAmount;
                atm.depositMoney(depositAmount);
                break;

            case 2:
                int withdrawAmount;
                cout << "Enter your Withdraw amount: ";
                cin >> withdrawAmount;
                atm.withdrawMoney(withdrawAmount);
                break;

            case 3:
                int transferAmount;
                cout << "Enter your Transfer amount: ";
                cin >> transferAmount;
                atm.transferMoney(transferAmount);
                break;

            case 4:
                atm.checkBalance();
                break;
            
            case 5:
                cout << "Deposite Amount: " << depositAmount << endl;
                cout << "Withdraw Amount: " << withdrawAmount << endl;
                cout << "Transfer Amount: " << transferAmount << endl;
                cout << endl;
                break; 

            case 6:
                cout << "Thank you for banking with us!" << endl << endl;
                run = false;
                break;

            default:
                cout << "Invalid Option" << endl << endl;
                break;
        }
    }
}

#include <iostream>
using namespace std;

int main() {
    string BankAccFN[5] = {"Shariyar ", "Shad ", "Fahim ", "Mahbub ", "Fayaiz "};
    string BankAccLN[5] = {"Hasan ", "Islam ", "Alom ", "Rahman ", "Farhan "};
    string BankAccNO[5] = {"SH23 ", "SI23 ", "FA23 ", "MR23 ", "FF23 "};
    int BankAccMO[5] = {2300, 1300, 2500, 3300, 5300};
    string AccDeatail[4] = {"First name: ", "Last name: ", "Account number: ", "Money: "};

    for(int i = 0; i < 5; i++) {
        cout << AccDeatail[0] << BankAccFN[i] << endl;
        cout << AccDeatail[1] << BankAccLN[i] << endl;
        cout << AccDeatail[2] << BankAccNO[i] << endl;
        cout << AccDeatail[3] << BankAccMO[i] << endl;
        cout << endl;
    }

    return 0;
}

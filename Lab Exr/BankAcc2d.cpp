#include <iostream>
using namespace std;

int main() {
    string BankAccFN[5] = {""}
    string BankAcc[5][4] = {{"Shariyar ", "Hasan ", "SH23 ", "2300 "}, {"Shad ", "Islam ", "SI23 ", "1300 "}, {"Fahim ", "Alom ", "FA23 ", "2500 "}, {"Mahbub ", "Rahman ", "MR23 ", "3300 "}, {"Fayiaz ", "Farhan ", "FF23 ", "5300 "}};
    string AccDeatail[4] = {"first name: ", "last name: ", "Account number: ", "Money: "};
    for(int i = 0; i < 5; i++) {
        cout << AccDeatail[i];
        for(int j = 0; j < 4; j++) {
            
            cout << BankAcc[i][j];
        }
        cout << endl;
    }
    return 0;
}
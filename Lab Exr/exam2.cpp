#include <iostream>
#include <string>
using namespace std;

string Account[100][3];
int count = 0;

void storeAccountInfo(string AcName, string AcID, string AcMoney) {
    char choice;
    cout << "Enter Account Name: ";
    cin >> AcName;
    cout << "Enter Account ID: ";
    cin >> AcID;
    cout << "Enter Account Money: ";
    cin >> AcMoney;
    cout << endl;
    Account[count][0] = AcName;
    Account[count][1] = AcID;
    Account[count][2] = AcMoney;
    count++;
    cout << "Press Y to add more | Press N to stop: ";
    cin >> choice;
    if(choice == 'Y' || choice == 'y') {
        storeAccountInfo(AcName, AcID, AcMoney);
    } else {
        cout << "Adding of Data ended" << endl;
    }
}

int findAccountIndex(string id) {
    int inID; char choice;
    for(int i = 0; i < 100; i++) {
        if(Account[i][1] == id) {
            inID = i;
        }
    }
    return inID;  
}

void printAccountInfo(int index) {
    cout << "Account Name: " << Account[index][0] << endl;
    cout << "Account ID: " << Account[index][1] << endl;
    cout << "Account Money: " << Account[index][2] << endl;
}

int main() {
    string ID;
    int index;
    string AcName, AcID, AcMoney;
    bool run = true;
    char ch;
    cout << "Enter your Account Information" << endl;
    storeAccountInfo(AcName, AcID, AcMoney);
    cout << endl;
    cout << "Search by ID" << endl;
    while(run) {
        cout << "Press Y to search | Press N to stop: ";
        cin >> ch;
        cout << endl;
        if(ch == 'Y' || ch == 'y') {
            cout << "Search ID.";
            cout << "Enter your ID: ";
            cin >> ID;
            cout << endl;
            index = findAccountIndex(ID);
            printAccountInfo(index);
            cout << endl;
        } else {
            cout << "Searching of Data ended" << endl;
            run = false;
        }
    }
}

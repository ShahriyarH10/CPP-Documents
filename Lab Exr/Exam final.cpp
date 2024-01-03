#include <iostream>
#include <string>
using namespace std;

int maxAccount = 100;
int infoSize = 3;
int count = 0;


void storeAccountInfo() {
    string Account[maxAccount][infoSize];
    string AcName, AcID, AcMoney;
    char choice;

    cout << "Enter Account Name: ";
    cin >> AcName;
    cout << "Enter Account ID: ";
    cin >> AcID;
    cout << "Enter Account Money: ";
    cin >> AcMoney;

    Account[count][0] = AcName;
    Account[count][1] = AcID;
    Account[count][2] = AcMoney;

    count++;

    cout << "Press Y to add more | Press N to stop: ";
    cin >> choice;

    if(choice == 'Y' || choice == 'y') {
        storeAccountInfo();
    } else {
        cout << "Adding of Data ended" << endl;
    }

}

int findAccountIndex(string id) {
    string Account[maxAccount][infoSize];
    for(int i = 0; i < maxAccount; i++) {
        if(Account[i][1] == id) {
            return i;
        }
    }

}

void printAccountInfo(int index) {
    string Account[maxAccount][infoSize];
    if(i == index) {
        cout << "Account Name: " << Account[index][0] << endl;
        cout << "Account ID: " << Account[index][1] << endl;
        cout << "Account Money: " << Account[index][2] << endl;
    }
    
}

int main() {
    string searchID;
    int info = 0;
    storeAccountInfo();

    cout << endl;

    cout << "Enter your ID: ";
    cin >> searchID;

    cout << endl;

    cout << findAccountIndex(searchID);
    printAccountInfo(info);
    return 0;


}


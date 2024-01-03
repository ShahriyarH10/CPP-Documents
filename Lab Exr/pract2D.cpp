#include <iostream>
using namespace std;

string Array1[100][3];
int count1 = 0;

void giveData() {

    string stName, stID, stCG;
    char choice1;

    cout << "Enter your name: ";
    cin >> stName;

    cout << "Enter your ID: ";
    cin >> stID;

    cout << "Enter your CGPA: ";
    cin >> stCG;

    Array1[count1][0] = stName;
    Array1[count1][1] = stID;
    Array1[count1][2] = stCG;

    count1 = count1 + 1;

    cout << "Press Y to add more | Press N to stop: ";
    cin >> choice1;

    if(choice1 == 'Y' || choice1 == 'y') {
        giveData();
    } else {
        cout << "Adding of Data ended" << endl;
    }
}

int findData() {
    string searchID;

    cout << "Please enter your desired ID: ";
    cin >> searchID;

    for(int i = 0; i < 100; i++) {
        if(Array1[i][1] == searchID) {
            for(int j = 0; j < 3; j++) {
                cout << Array1[i][j] << " ";
            }   
        }
    }
}

int main() {
    giveData();
    findData();
}
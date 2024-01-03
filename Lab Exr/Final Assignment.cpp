#include <iostream>
#include <string>
using namespace std;

string Student[100][3];
int count = 0;

void storeStudentInfo(string StName, string StID, string StCgpa) {
    char choice;
    
    cout << "Enter Student Name: ";
    cin >> StName;
    cout << "Enter Student ID: ";
    cin >> StID;
    cout << "Enter Student CGPA: ";
    cin >> StCgpa;
    cout << endl;
    
    Student[count][0] = StName;
    Student[count][1] = StID;
    Student[count][2] = StCgpa;
    count++;

    cout << "Press Y to add more | Press N to stop: ";
    cin >> choice;

    if(choice == 'Y' || choice == 'y') {
        storeStudentInfo(StName, StID, StCgpa);
    } else {
        cout << "Adding of Data ended" << endl;
    }
}

int findStudentIndex(string id) {
    int inID; char choice;
    for(int i = 0; i < 100; i++) {
        if(Student[i][1] == id) {
            inID = i;
        }
    }
    return inID;  
}

void printStudentInfo(int index) {
    cout << "Student Name: " << Student[index][0] << endl;
    cout << "Student ID: " << Student[index][1] << endl;
    cout << "Student CGPA: " << Student[index][2] << endl;
}

int main() {
    string ID;
    int index;
    string Name, Id, Cgpa;
    bool run = true;
    char ch;

    cout << "Enter your Student Information" << endl;
    storeStudentInfo(Name, Id, Cgpa);
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
            index = findStudentIndex(ID);
            printStudentInfo(index);
            cout << endl;
        } else {
            cout << "Searching of Data ended" << endl;
            run = false;
        }
    }
}

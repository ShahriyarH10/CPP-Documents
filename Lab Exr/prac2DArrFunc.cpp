#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 100;
const int INFO_SIZE = 3;  // Assuming Student Name, Student ID, and Student CGPA
int currentIndex = 0;

// Function to store student information in the 2D array
void storeStudentInfo(string students[][INFO_SIZE]) {
    
    string name;
    string id;
    string cgpa;
    char choice1;

    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Student ID: ";
    cin >> id;
    cout << "Enter Student CGPA: ";
    cin >> cgpa;

    students[currentIndex][0] = name;
    students[currentIndex][1] = id;
    students[currentIndex][2] = cgpa;

    currentIndex++;

    cout << "Press Y to add more | Press N to stop: ";
    cin >> choice1;

    if(choice1 == 'Y' || choice1 == 'y') {
        storeStudentInfo(students);
    } else {
        cout << "Adding of Data ended" << endl;
    }
    
}

// Function to find the index of a student with a given ID
int findStudentIndex(string id, string students[][INFO_SIZE]) {
    for (int i = 0; i < 100; ++i) {
        if (students[i][1] == id) {
            return i;
        }
    }
    // Return -1 if student with the provided ID is not found
    return -1;
}



// Function to print student information using the index
void printStudentInfo(string searchID, string students[][INFO_SIZE]) {
    bool studentFound = false;
    for (int i = 0; i < MAX_STUDENTS; i++) {
        if (students[i][1] == searchID) {
            cout << "Student Name: " << students[i][0] << endl;
            cout << "Student ID: " << students[i][1] << endl;
            cout << "Student CGPA: " << students[i][2] << endl;
            studentFound = true;
            break;
        }
    }
    if (!studentFound) {
        cout << "Student with the provided ID not found." << endl;
    }
}


int main() {
    string students[MAX_STUDENTS][INFO_SIZE];

    // 1. Store student information
    storeStudentInfo(students);
    
    cout << endl;

    // 2. Take user input for ID
    string searchID;
    cout << "Enter Student ID to search: ";
    cin >> searchID;

    cout << endl;

    // 3. Find the index of the student with the given ID
    int studentIndex = findStudentIndex(searchID, students);

    // 4. Print student information if found
    if (studentIndex != -1) {
        printStudentInfo(searchID, students);
    } else {
        cout << "Student with the provided ID not found." << endl;
    }

    return 0;
}


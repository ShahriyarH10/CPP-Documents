#include <iostream>
#include <cstring> // Include the <cstring> header for string manipulation functions
using namespace std;

int main() {
    char FirstName[21] = {};
    char LastName[21] = {};
    char FullName[43] = {}; // Allocate enough memory for the concatenated string

    cout << "Enter your first Name: ";
    cin >> FirstName;
    cout << "Enter your last Name: ";
    cin >> LastName;

    cout << "Length of first Name: " << strlen(FirstName) << endl;
    cout << "Length of last Name: " << strlen(LastName) << endl;

    strcpy(FullName, FirstName); // Copy the first name to the full name array
    strcat(FullName, " "); // Add a space between the first and last names
    strcat(FullName, LastName); // Append the last name to the full name array

    cout << "Full Name: " << FullName << endl;

    int a = strlen(FirstName);
    int b = strlen(LastName);

    int totalLength = a + b;

    cout << "Total Length of Name: " << totalLength << endl;

    return 0;
}

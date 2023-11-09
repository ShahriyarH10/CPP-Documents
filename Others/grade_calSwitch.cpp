#include <iostream>
using namespace std;

int main() {
    double sum = 0;
    int avg;
    double marks[5];

    cout << "Enter English marks: ";
    cin >> marks[0];
    cout << "Enter Physics marks: ";
    cin >> marks[1];
    cout << "Enter Biology marks: ";
    cin >> marks[2];
    cout << "Enter Programming marks: ";
    cin >> marks[3];
    cout << "Enter History marks: ";
    cin >> marks[4];
    cout << endl;

    for(int i = 0; i < 5; i++){
        sum += marks[i];
    }

    avg = sum / 5;
    cout << "Your marks in avarage: " << avg << endl;

    switch (avg)
    {
    case 1:
        
        break;
    
    default:
        break;
    }

    return 0;
}
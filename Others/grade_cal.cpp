#include <iostream>
using namespace std;

int main() {
    double sum = 0;
    double avg;
    double marks[5];
    string subName[5] = {"English", "Physics", "Biology", "Programming", "History"};

    for(int i = 0; i < 5; i++) {
        cout << "Enter " << subName[i] << " marks: ";
        cin >> marks[i];
    }
    cout << endl;

    /*cout << "Enter English marks: ";
    cin >> marks[0];
    cout << "Enter Physics marks: ";
    cin >> marks[1];
    cout << "Enter Biology marks: ";
    cin >> marks[2];
    cout << "Enter Programming marks: ";
    cin >> marks[3];
    cout << "Enter History marks: ";
    cin >> marks[4];
    cout << endl;*/

    for(int i = 5; i > 0; i--){
        sum += marks[i];
        
    }

    avg = sum / 5;

    cout << "Your total marks: " << sum << endl;
    cout << "Your marks in avarage: " << avg << endl;

    if (avg >= 80 && avg < 100){
        cout << "Your Grade is A" << endl;
    }
    else if (avg >= 70 && avg < 79){
        cout << "Your Grade is B" << endl;
    }
    else if (avg >= 60 && avg < 69){
        cout << "Your Grade is C" << endl;
    }
    else if (avg >= 50 && avg < 59){
        cout << "Your Grade is D" << endl;
    }
    else if (avg <= 50){
        cout << "Your Grade is F" << endl;
    }
    else{
        cout << "Enter Valid Marks" << endl;
    }

    return 0;


}

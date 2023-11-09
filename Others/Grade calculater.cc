#include<iostream>
using namespace std;
int main()
{
    int i;
    string sub[5] = {"English", "Physics", "Biology", "Programming", "History"};
    float marks;
    float sum, avg;
    cout << "Enter Marks obtained in English: ";
    cin >> marks;
    cout << "Enter Marks obtained in Physics: ";
    cin >> marks;
    cout << "Enter Marks obtained in Biology: ";
    cin >> marks;
    cout << "Enter Marks obtained in Programming: ";
    cin >> marks;
    cout << "Enter Marks obtained in History: ";
    cin >> marks;

 

    for(i = 0; i < 5; i++){
        sum = sum + marks;
    }
    
    avg = sum / 5;

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


    /*int i;
    string sub[5] = {"English", "Physics", "Biology", "Programming", "History"};
    float marks[5];
    float sum = 0, avg;

    for(i = 0; i < 5; i++)
    {
        cout << "Enter Marks obtained in " << sub[i] << ": ";
        cin >> marks[i];
        sum = sum + marks[i];
    }
    avg = sum / 5;

    if (avg >= 80 && avg <= 100){
        cout << "Your Grade is A" << endl;
    }
    else if (avg >= 70 && avg < 80){
        cout << "Your Grade is B" << endl;
    }
    else if (avg >= 60 && avg < 70){
        cout << "Your Grade is C" << endl;
    }
    else if (avg >= 50 && avg < 60){
        cout << "Your Grade is D" << endl;
    }
    else if (avg < 50){
        cout << "Your Grade is F" << endl;
    }
    else{
        cout << "Enter Valid Marks" << endl;
    }*/
    return 0;
}
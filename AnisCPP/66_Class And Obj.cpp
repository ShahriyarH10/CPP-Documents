#include <iostream>
using namespace std;

class Student {
    public:
        int id;
        double gpa;
};

int main() {
    Student Alim;

    Alim.id = 101;
    Alim.gpa = 3.44;
    cout << Alim.id << " ";
    cout << Alim.gpa << endl;

    Student Suparna;
    Suparna.id = 102;
    Suparna.gpa = 3.02;
    cout << Suparna.id << " ";
    cout << Suparna.gpa << endl;

    return 0;
}
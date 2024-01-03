#include <iostream>
using namespace std;

class Student {
    public:
        int id;
        double gpa;

        void dispaly() {
            cout << id << " " << gpa << endl;
        }
};

int main() {
    Student Alim, Suparna;;

    Alim.id = 101;
    Alim.gpa = 3.44;
    Alim.dispaly();
    
    Suparna.id = 102;
    Suparna.gpa = 3.02;
    Suparna.dispaly();
}
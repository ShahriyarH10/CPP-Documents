#include <iostream>
using namespace std;

class Student {
    public:
        int id;
        double gpa;

        void dispaly() {
            cout << id << " " << gpa << endl;
        }

        void setValue(int x, double y) {
            id = x;
            gpa = y;
        }
};

int main() {

    Student Alim, Suparna;
    Alim.setValue(101, 3.44);
    Alim.dispaly();

    Suparna.setValue(102, 3.02);
    Suparna.dispaly();

    return 0;
}
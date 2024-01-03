#include <iostream>
using namespace std;

class Student {
    public:
        int id;
        double gpa;
        
        void dispaly() {
            cout << id << " " << gpa << endl;
        }

        Student(int x, double y) {
            id = x;
            gpa = y;
        }
};

int main() {
    Student Alim (101, 3.44);
    Alim.dispaly();

    Student Suparna(102, 3.92);
    Suparna.dispaly();

    return 0;
}
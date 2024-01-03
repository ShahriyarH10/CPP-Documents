#include <iostream>
using namespace std;

class person {
    private:
        int age;
        float height;
        string firstName, lastName;
    public:
        person(string fName, string lName, int a, float h) {
            firstName = fName;
            lastName = lName;
            age = a;
            height = h;
            cout << "Name = " << firstName << " " << lastName << endl;
            cout << "Age = " << age << endl;
            cout << "Height = " << height << endl;
        }


};

int main() {
    person p("John", "Smith", 45, 5.9);
}
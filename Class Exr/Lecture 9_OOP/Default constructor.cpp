#include <iostream>
using namespace std;

class person {
    private:
        int age;
        float height;
    public:
        person(){
            age = 0;
            height = 0.0;
            cout << "default values from constructor" << endl;
            cout << "Age = " << age << endl;
            cout << "Height = " << height << endl;
        }
};

int main() {
    person p;
}
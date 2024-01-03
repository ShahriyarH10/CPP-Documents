#include <iostream>
using namespace std;

class smallobj {
    private:
        int someData;

    public:
        void setData(int d) {
            someData = d;
        }
        void showdata() {
            cout << "Data is " << someData;
        }
};

int main() {
    smallobj s1, s2;
    s1.setData(10);
    s2.setData(20);

    s1.showdata();
    cout << endl;
    s2.showdata();
}
#include <iostream>
using namespace std;

class Billborad {
    private:
    string title;

    public:
    Billborad(string b) {
        setTitle(b);
    }
    void setTitle(string a) {
        title = a;
    }
    string getTitle(){
        return title;
    }
};

int main() {
    Billborad bill("Top 3 songs of 2020");
    cout << bill.getTitle();
}
#include <iostream>
#include <string.h>
#define PRAISE " What a super marvelous name!"
using namespace std;

int main() {
    char name[40];
    cout << "What is your First Name?" << endl;
    cin >> name;
    cout << "Hello " << name << PRAISE << endl;
    cout << "Your name of " << strlen(name) << " letters occupies" << sizeof name << " memory" << endl;
    return 0;
}

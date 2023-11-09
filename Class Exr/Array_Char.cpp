#include <iostream>
using namespace std;

int main() {
    int i, n;
    cout << "How many Charecter do you want to input?: ";
    cin >> n;
    char characters[n] = {};

    cout << "Your name: ";
    for(i = 0; i < n; i++){
        cin >> characters[i];
    }

    cout << endl;

    cout << "Your name in reverse: " ;
    for(i = n - 1; i >= 0; i--){
        cout << characters[i];
    }

    cout << endl;

    return 0;
}

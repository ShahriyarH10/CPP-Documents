#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i = 0;
    do{
        sum = sum + i;
        i++;
    }
    while (i < 10);
    {
        cout << "Sum is " << sum << endl;
    }
    
}
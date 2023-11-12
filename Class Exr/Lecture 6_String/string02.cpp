#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char string1[] = "this is";
    char string2[] = "a test";
    char string3[] = "Hello, ";
    char string4[] = "world!";
    cout << string3 << endl;
    strcat(string3, string4);
    cout << string3 << endl;

    if(strcmp(string1, string2) == 0) {
        cout << "strings are equal" << endl;
    } else {
        cout << "strings are different" << endl;
    }
    return 0;
}
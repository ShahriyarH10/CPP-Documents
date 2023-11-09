#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int main() {
    char str1[] = {'A', 'B', 'C', '\0'};
    char str2[] = {'X', 'Y', 'Z', '\0'};
    cout << strlen(str1) << endl;
    cout << strcat(str1, str2) << endl;
    cout << strcmp(str1, str2) << endl;

    //negative to absulet
    int a = -89;
    int b = abs(a);
    cout << b << endl;

    //decimal to integer
    double d = 688.44344;
    int c = int (d);
    cout << c << endl;

    //flooring and ceiling
    double r = 2.1;
    double e = 3.9;
    int s = ceil(r);
    int u = floor(e);
    cout << s << endl << u << endl;



    
}
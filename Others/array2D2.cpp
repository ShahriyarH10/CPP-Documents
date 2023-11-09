#include <iostream>
using namespace std;

int main()
{
    double A[2][4] = {{1.1, 2.2, 3.3, 4.4}, {5.5, 6.6, 7.7, 8.8}};
    double Min, Max, product;

    Max = A[0][0];
    Min = A[1][0];

    for(int i = 0; i < 2; i++) {

        for(int j = 0; j < 4; j++) {

            cout<<A[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    
    for(int i = 0; i < 1; i++) {

        for(int j = 0; j < 4; j++) {

            if (A[i][j] > Max) {

                Max = A[i][j];
            }
        }
        cout << endl;
    }
    
    for(int i = 1; i < 2; i++) {

        for(int j = 0; j < 4; j++) {

            if (A[i][j] < Min) {

                Min = A[i][j];
            }
        }
        cout << endl;
    }
    product = Max * Min;

    cout << "Largest element of 1st row = "<< Max << endl;
    cout << "Smallest element of 2nd row = "<< Min << endl;
    cout << "The product of " << Max << " and " << Min << " = " << product << endl;
    cout << endl;
    return 0;
}

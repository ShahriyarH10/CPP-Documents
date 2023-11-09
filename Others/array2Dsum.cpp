#include <iostream>
using namespace std;

int main() {
    int matA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matB[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum[3][3];

    cout << "1st Matrices: " << endl;
    for(int i = 0; i < 3; i++) {

        for(int j = 0; j < 3; j++) {

            cout << matA[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "2nd Matrices: " << endl;
    for(int i = 0; i < 3; i++) {

        for(int j = 0; j < 3; j++) {

            cout << matB[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Addition of Matrices: " << endl;
    for(int i = 0; i < 3; i++) {

        for(int j = 0; j < 3; j++) {
            
            sum[i][j] = matA[i][j] + matB[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
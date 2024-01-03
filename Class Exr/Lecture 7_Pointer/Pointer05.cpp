#include <iostream>
using namespace std;

void print1(int tab[], int N){
    int i;
    for(i = 0; i < N; i++){
        cout << tab[i] << " ";
    }
    cout << endl;
}

void print2(int tab[], int N){
    int *ptr;
    for(ptr = tab; ptr < tab + N; ptr++){
        cout << *ptr << " ";
    }
    cout << endl;
}

void print3(int *tab, int N){
    int *ptr;
    for(ptr = tab; ptr < tab + N; ptr++){
        cout << *ptr << " ";
    }
    cout << endl;
}

void print4(int *tab, int N){
    int i;
    for(i = 0; i < N; i++, tab++){
        cout << *tab << " ";
    }
    cout << endl;
}

int main() {
    int a[5] = {1,2,3,4,5};
    print1(a,5);
    print2(a,5);
    print3(a,5);
    print4(a,5);
    return 0;
}

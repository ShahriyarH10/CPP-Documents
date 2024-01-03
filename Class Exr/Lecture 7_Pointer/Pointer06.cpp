#include <iostream>
using namespace std;

int strlen(char *s){
    int n;
    for(n = 0; *s != '\0'; s++){
        n++;
    }
    return n;
}

int main() {
    char array[100] = "Hello, world";
    char *ptr = "Hello, world";
    
    strlen("Hello, world");
    strlen(array);
    strlen(ptr);

    return 0;
}

#include<iostream>
#include <string.h>
using namespace std;

int main(){

    char str[20];
    str[0]='H';
    str[1]='E';
    str[2]='L';
    str[3]='L';
    str[4]='O';
    str[5]=' ';
    str[6]='L';
    str[7]='A';
    str[8]='B';
    str[9]='\0'; // here '\0' is known as null character.

    int arr [] = {1,2,3,4};
    char str1[] = {'H','E','L','L','O',' ','C','\0'};//initializing character array
    char str2[] = "HELLO\0CLASS";//initializing character array
    char str3[50]="Str3";

    for(int i=0;str[i]!='\0';i++){
        cout<<str[i];
    }
    cout<<endl;
    //name of an array reference to the first element of array
    //here str and &str[0] means the same address.
    cout<<str<<endl;

    for(int i=0;str1[i]!='\0';i++){
        cout<<str1[i];
    }
    cout<<endl;
    cout<<str1<<endl;

    //string length using string.h library function strlen()
    cout<<strlen(str)<<endl;
    strcat(str3,str1);//string concat using strtcat function.
    cout<<str3<<endl;

    cout<<strlen(str2)<<endl;

    char inputStr[20]="";
    //string input/output
    cin>>inputStr;
    cout<<inputStr<<endl;

return 0;
}

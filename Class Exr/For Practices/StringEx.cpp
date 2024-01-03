#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char word [] = {'H','E'};
    char s1[] = "STR1";
    char s2[] = "STR2";

    for(int i=0;i<12;i++){
        cout<<word[i];
    }
    cout<<endl;

    cout<<word<<endl;
    cout<<&word[0]<<endl;
    cout<<"Length of string :"<<strlen(word)<<endl;

    strcat(s1,s2);
    cout<<s1<<endl;
    cout<<strcmp("HE","SHE")<<endl;

return 0;
}

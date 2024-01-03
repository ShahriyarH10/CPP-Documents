#include<iostream>
using namespace std;

//class ClassName { body };
class Student{
public:
    string name;
    string id;
    int age;
    float cgpa;

    void showStudentInfo(){
        cout<< name <<endl;
        cout<< id <<endl;
        cout<< age <<endl;
        cout<< cgpa <<endl;
    }

};

int main(){
    //student

    Student s1,s2;

    s1.name = "Karim";
    s1.id = "20-XXXXX-2";
    s1.age = 21;
    s1.cgpa = 3.75;

    s1.showStudentInfo();

    //student
    s2.name = "Kamal";
    s2.id = "20-XXXX1-2";
    s2.age = 21;
    s2.cgpa = 3.77;

    s2.showStudentInfo();

    return 0;
}

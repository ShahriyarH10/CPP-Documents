#include<iostream>
using namespace std;

//class ClassName { body };
class Student{
//access modifiers
public:
    //properties/attributes/data members
    string name="";
    string id="";
    int age=0;
private:
    float cgpa=0;
public:
    //Constructor is a special type of method
    // it does not have any return type.
    // Name of a constructor is as same as class name
    // it can take any number of parameter as normal methods.
    // it is automatically executed at the time of creating object
    // it is mainly used for initializing properties/data members
    //Constructor is called exactly one time for an object;
    Student(){
    cout<<"Student Empty Constructor"<<endl;
    }

    Student(string n,string i, int a, float c){
        cout<<"Student Parameterized Constructor"<<endl;
        name = n;
        id = i;
        age = a;
        cgpa = c;
    }

    //setter method
    void setCgpa(float c){
        if(c>=0 && c <=4){
            cgpa = c;
        }
        else{
            cout<<"Invalid CGPA Value"<<endl;
        }
    }
    //getter method
    float getCgpa(){
        return cgpa;
    }

    //methods
    void showStudentInfo(){
        cout<< name <<endl;
        cout<< id <<endl;
        cout<< age <<endl;
        cout<< cgpa <<endl;
    }

};

int main(){
    //student

    Student s1("Karim","20-XXXXX-2",21,3.75);
    s1.showStudentInfo();

    Student s2 ("Kamal","20-XXXX1-2",22,3.77);
    //student

    s2.showStudentInfo();
    cout<<s2.getCgpa()<<endl;

    Student s3;

return 0;
}

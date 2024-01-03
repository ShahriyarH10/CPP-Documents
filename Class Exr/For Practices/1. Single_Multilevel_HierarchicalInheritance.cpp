#include<iostream>
using namespace std;

class Shape{
//protected members can be accessed within the class and from the child class
protected:
    double length;

public:
    Shape(){cout<<"Shape-Empty Constructor is called"<<endl;}
    Shape(double l){
        length = l;
        cout<<"Shape-Parameterized Constructor is called"<<endl;
    }
    ~Shape(){
        cout<<"Shape-Destructor"<<endl;
    }

    void setLength(double l){
        length = l;
    }
    double getLength(){
        return length;
    }
};

//class ChildClassName: accessSpecifier ParentClassName{ //child class body };
class Square: public Shape{
public:
    Square(double l):Shape(l){
        cout<<"Square Constructor is called"<<endl;
    }
    double getArea(){
        return length*length;
    }
};

//class ChildClassName: accessSpecifier ParentClassName{ //child class body };
class Rectangle: public Shape{
protected:
    double width;

public:
    Rectangle(double l, double w):Shape(l){
        width = w;
        cout<<"Rectangle Constructor is called"<<endl;
    }
    ~Rectangle(){
        cout<<"Rectangle-Destructor"<<endl;
    }
    void setWidth(double w){
        width = w;
    }

    double getWidth(){
        return width;
    }

    double getArea(){
        return length*width;
    }

};


class Box: public Rectangle{
private:
    double height;
public:
    Box(double l, double w, double h):Rectangle(l,w){
        height = h;
        cout<<"Box Constructor is called"<<endl;
    }
    ~Box(){
        cout<<"Box-Destructor"<<endl;
    }
    void setHeight(double h){
        height = h;
    }

    double getHeight(){
        return height;
    }

    double getVolume(){
        return getArea()*height;
    }


};


int main(){

    //Shape  s(10);
    //cout<<s.getLength()<<endl;

    //Square s1(5);
    //cout<<s1.getArea()<<endl;

    //Rectangle r(5,7);
    //cout<<r.getArea()<<endl;

    Box b(5,7,8);
    cout<<b.getArea()<<endl;
    cout<<b.getVolume()<<endl;

return 0;
}

#include <iostream>
using namespace std;
class shape
{
protected:
float length;
float width;
float height;
public:
void setL(float a){length=a;}
float getL(){return length;}
void setW(int a){width=a;}
float getW(){return width;}
void setH(float a){height=a;}
float getH(){return height;}
void print()
{ cout << "Length: " << getL() <<endl << "Width: " << getW() << endl<< "Height: " << getH()<<endl;}
};
class rectangle:public shape
{
private:
    float rarea;
public:
    rectangle(){height=0;}
    void setA( float rarea );
float getA()
    { float a; float b;
        a=length;
        b=width;
        rarea=length*width;
        return rarea;}
void printRecArea() {cout<<"Area of Rectangle: "<<getA()<<endl;}
};
class triangle:public shape
{
private:
    float tarea;
public:
    triangle(){height=0;}
    void setT( float tarea );
float getT()
    { float a; float b;
        a=length;
        b=width;
        tarea= 0.5*length*width;
        return tarea;}
void printTriArea() {cout<<"Area of Triangle: "<<getT()<<endl;}
};
class square:public shape
{
private:
    float sarea;
public:
    square() {height=0;}
    void setS( float sarea );
float getS()
    { float a; float b;
        a=length;
        b=width;
        sarea= length*length;
        return sarea;}
void printSqArea() {cout<<"Area of Square: "<<getS()<<endl<<endl;}
};
int main()
{   rectangle ob;
    ob.setL (25);
    ob.setW(10);
    ob.print();
    ob.printRecArea ();
    cout<<endl;
    triangle ob1;
    ob1.setL (25);
    ob1.setW(10);
    ob1.print();
    ob1.printTriArea();
    cout<<endl;
    square ob2;
    ob2.setL (25);
    ob2.print();
    ob2.printSqArea ();
}

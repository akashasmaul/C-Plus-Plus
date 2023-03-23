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
    float area;
public:
    rectangle(){height=0;}
    void setA( float area )
    { float a; float b;
        a=length;
        b=width;
        area=length*width;}
float getA() {return area;}
void printRecArea() {cout<<"Area: "<<getA()<<endl;}
};
int main()
{
    rectangle ob;
    ob.setL (25);
    ob.setW(10);
    ob.print();
    ob.printRecArea();
}

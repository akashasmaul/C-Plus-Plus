#include <iostream>
using namespace std;
class test
{
private:
int x;
int y;
public:
void setX(int a){x=a;}
int getX(){return x;}
void setY(int a){y=a;}
int getY(){return y;}
void print(){cout<<"X: "<<x<<endl<<"Y: "<<y;}
} ;
int main()
{
test ob;
ob.setX(123321);
ob.setY(98890);
ob.print();
}

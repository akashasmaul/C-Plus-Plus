#include <iostream>
using namespace std;
class test
{
private:
    int x;
public:
    void setX (int a) {x=a;}
    int getX () {return x;}
    void print () {cout<<"Value of Variable: "<<x<<endl<<endl;}
    };
int main()
{
    test ob;
    ob.setX(12345);
    ob.print();
}

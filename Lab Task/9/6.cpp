#include <iostream>
using namespace std;

class one
{
public:
    void print()
    {
        cout<<"One class"<<endl;
    }
};

class second:public one
{
public:
    void print()
    {
        cout<<"Second class."<<endl;
    }

};
int main()
{
    cout<<"Runtime Polymorphism: (Function overloading)"<<endl<<endl;
    one ob;
    ob.print();
    second ob1;
    ob1.print();
}

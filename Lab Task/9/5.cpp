#include<iostream>
using namespace std;

class person
{
public:
    void print()
    {
        cout<<"No parameter"<<endl;
    }
    void print(float a)
    {
        cout<<"Float: "<<a<<endl;
    }
    void print(string a)
    {
        cout<<"String: "<<a<<endl;
    }

};

int main()
{
    person ob;
    ob.print();
    ob.print(7.78);
    ob.print("Akash");
}

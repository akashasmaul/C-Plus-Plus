#include<iostream>
using namespace std;

class one
{
public:
    one()
    {
        cout << "one (constructor)" << endl;
    }
};

class two
{
public:
    two()
    {
        cout << "two (constructor)" << endl;
    }
};

class three: public two, public one
{
public:
    three()
    {
        cout << "three (constructor)" << endl;
    }
};

int main()
{
    three();
}


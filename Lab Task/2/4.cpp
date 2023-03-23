#include<iostream>
using namespace std;

int main()
{
    int x;
    int y;
    cout<<"Please enter the value of x:";
    cin>>x;
    y = x%2;
    cout<<" Remainder : "<<y<<endl<<endl;
    cout <<"If Remainder = 0, x is a even number" << endl;
    cout <<"If Remainder = 1, x is a odd number" << endl;
}

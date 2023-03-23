#include <iostream>
using namespace std;
int main()

{
    int n,m, x;
    cout<< "Input smaller range ";
    cin>>n;
    cout<< "Input bigger range ";
    cin>>m;
    int  e=n;
    cout<<"Even number:  "<<endl;
    while( e<= m)
    {
        if (e%2==0 )
        {
            cout<<e<<endl;
        }

        e++;
    }

    int  r=n;
    cout<<"Odd numbers:  "<<endl;
    while( r<= m)
    {
        if (r%2!=0 )
        {
            cout<<r<<endl;
        }

        r++;
    }

    }

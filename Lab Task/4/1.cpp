#include <iostream>
using namespace std;
int main ()
{
    int x, y, temp, option;

    cout<<"Input X: ";
   cin>>x;
    cout<<"Input y: ";
   cin>>y;
   cout<<"Select an option"<<endl;
    cout<<"Press 1 to swap the values"<<endl;
     cout<<"Press 2 to check whether the input values are multiples of 2"<<endl;
    cout<<"Press 3 to check the Range of the Values"<<endl;

    cout<<": ";
    cin>>option;
    switch (option) {
         case 1:
             temp = x;
    x = y;
    y = temp;
    cout << "After swapping " << "x = " << x << ", y = " << y << endl;
    break;
    case 2:
        { if (x % 2 == 0)
            cout << "X can be multiples of 2" << endl;

        else
        cout << "X cannot be multiples of 2" << endl; }
        {
                    if (y % 2 == 0)
            cout << "Y can be multiples of 2" << endl;
        else
        cout << "Y cannot be multiples of 2" << endl; }
    break;


 case 3:

     int p;
if ( y<x )
{
    p = x;
    x = y;
    y = p;
    cout<<x<<" - "<<y;
    }
    else cout<<x<<" - "<<y;
    break;
    default:
        cout<<"Wrong Input"<<endl;
        break;
}
}

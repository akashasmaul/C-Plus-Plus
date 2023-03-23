#include <iostream>
using namespace std;
int x=25;
int main()
{ cout<<"x global= "<<x<<endl;
   {

    int x, y, z;
    x=2; z=4;
    y= x++ + ++x;
    cout<<" Value of y in a. "<<y<<endl;
   }
   {
    int x, y, z;
     x=2; z=4;
    y=++x + ++x;
    cout<<" Value of y in b. "<<y<<endl;
   }
   {
    int x, y, z;
     x=2; z=4;
    y= ++x + ++x + ++x;
    cout<<" Value of y in c. "<<y<<endl;
   }
   cout<<"x global= "<<x<<endl;
}

#include <iostream>
using namespace std;
int main()
{
    int m;
    int n;
    cout<<"Input a integer: ";
    cin>>m;
    cout<<endl;
    cout<<"Input another integer: ";
    cin>>n;
    cout<<endl;

    cout<<endl;

    int *i;
    int *j;
    int t;
    cout<<"temp"<<*i;


    i = &m;
    j = &n;

    t = *i;
    *i = *j;
    *j = t;

    cout<<"After swapping:\nThe value of first interger is: "<<m<<endl<<"The value of 2nd integer is: "<<n<<endl;

}

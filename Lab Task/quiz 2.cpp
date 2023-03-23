#include <iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,3,50};
    //arr[5]={10,20,30,3,50};
    for (int i=0;i<5;i+=2)
    {
        if (arr[i]%2 ==0)
        {
            cout<<"Even";
        }
        else
        {
            cout<<"Odd";
        }
    }
}

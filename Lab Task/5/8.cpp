#include <iostream>
using namespace std;
int main()
{
    int arr[5]={7,73,999,65,87};
    int *p;
    int m,n;

    for(int i=0; i<5; i++)
    {
        cout<<"Number assigned to index "<<i+1 << ": "<<arr[i]<<endl;
    }

    cout<<endl<<"Choose the number of index you want to change: ";
    cin>>m;
    cout<<endl<<endl;
    cout<<"Enter the number you want to input in this index: ";
    cin>>n;
    p = &arr[m-1];
    *p = n;
    cout<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<"New number assigned to index "<<i+1 << ": "<<arr[i]<<endl;
    }
}

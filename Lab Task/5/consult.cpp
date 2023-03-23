#include <iostream>
using namespace std;

int main()
{
cout<<"Enter the size of the array"<<endl;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cout<<"Enter value into index: "<<i<<endl;
cin>>arr[i];
}
for(int i=0;i<n;i++)
{
cout<<"Index ["<<i<<"] -> "<<arr[i]<<endl;
}

}

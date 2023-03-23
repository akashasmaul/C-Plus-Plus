#include <iostream>
#include<windows.h>
using namespace std;
int binarySearch(int arr[], int n, int value)
{
    int first, last, middle;
    first=0;
    last=n-1;
    while (first<=last)
    {
        middle=(first+last)/2;
        if (value==arr[middle])
        {
            return middle;
        }
        else if (value<arr[middle])
        {
            last=middle-1;
        }
         else if (value>arr[middle])
        {
            first=middle+1;
        }
    }
return -1;
}
int main()
{
int arr[]={2,3,4,6,7,9,14};
int size=sizeof(arr)/sizeof(arr[0]);
int index = binarySearch(arr,size,7);
if(index>=0)
{
    cout<<"\aElement found at index: "<<index<<endl;
}
else
    cout<<"Element not found"<<endl;
}

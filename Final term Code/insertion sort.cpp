#include <iostream>
#include<windows.h>
using namespace std;


void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void insertionSort(int arr[], int n)
{ int val, j;

    for(int i=0; i<n; i++)
    {
        val= arr[i];
        j=i-1;
        while (j>=0 && arr[j]>val)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=val;
          printArray(arr, n);
         cout<<"==============="<<endl;
    }
}

int main()
{
    int arr[5]={7,4,6,2,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted array"<<endl;
    printArray(arr, size);

    insertionSort(arr,size);

    cout<<"\aSorted array"<<endl;
    printArray(arr, size);
}

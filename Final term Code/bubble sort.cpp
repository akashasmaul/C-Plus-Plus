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
void bubbbleSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
              //  Sleep(2000);
                printArray(arr, n);

            }
        }
        cout<<"==============="<<endl;
    }
}
int main()
{
    int arr[5]={7,4,6,2,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted array"<<endl;
    printArray(arr, size);

    bubbbleSort(arr,size);

    cout<<"\aSorted array"<<endl;
    printArray(arr, size);


}

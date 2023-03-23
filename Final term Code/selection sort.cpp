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
void selectionSort(int arr[], int n)
{
    int min;
    for(int i=0; i<n-1; i++)
    {
        min=i;
        for (int j=i; j<n; j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        cout<<"==============="<<endl;
    }
}
int main()
{
    int arr[5]={7,4,6,2,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Unsorted array"<<endl;
    printArray(arr, size);

    selectionSort(arr,size);

    cout<<"\aSorted array"<<endl;
    printArray(arr, size);


}

#include <iostream>
using namespace std;
int main()
{

    int arr[10]={1,2,3,4,5,6,7,8,9};
    int odd=0,sum=0;
    cout<<"arr[10]={1,2,3,4,5,6,7,8,9}"<<endl<<endl;
    cout << "Odd numbers from above array: ";
    for(int i=0; i<10; i++)
        {
        if(arr[i]%2!=0)
            {
            cout<<arr[i]<<" ";
        }
    else
            sum = sum+arr[i];
    } cout<<endl<<endl;
    cout << "Sum of even numbers: "<<sum<< endl;
}


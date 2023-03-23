#include <iostream>
using namespace std;
int main()
{   cout<<"Enter size of array: ";
    int n=0;
    cin>>n;
    n=n-1;
    int arr[n];
    cout<<"Enter the numbers from the last index: "<<endl;
    for(int i=n; i>=0; i--)
        cin>>arr[i];



    cout<<endl;
    cout<<"Inputed numbers from the first index: "<<endl;
    { for (int j; j<=n; j++)
    {

        cout<<arr[j]<<endl;
}
     }
        }

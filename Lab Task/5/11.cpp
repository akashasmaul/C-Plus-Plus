#include <iostream>
using namespace std;
int main()
{   int n=10;
    int arr[n];
    cout<<"Enter 10 interger: "<<endl;
    for(int i=n; i>=0; i--)
        cin>>arr[i];
    int freq[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int a;
    for(int i=0; i<10; i++)
        {
        a = 1;
        for(int j=i+1; j<10; j++)
    {
            if(arr[i]==arr[j])
                {
                  a++;
                freq[j] = 0;
            }
            if(freq[i] != 0)
                {
                freq[i] = a;
            }
        }
    }

    for(int i=0; i<10; i++)
    {
            if(freq[i]==1)
                {
                cout << arr[i] << " occurs = " << freq[i] << " time" << endl;
            }
    else if(freq[i]!=0){
                cout << arr[i] << " occurs = " << freq[i] << " times" << endl;
            }
        }
}



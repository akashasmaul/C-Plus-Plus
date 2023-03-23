#include <iostream>
using namespace std;
int main()
{
    int arr[20]={3,4,5,6,2,3,6,8,9,1,2,4,3,2,4,3,2,4,3,5};
    int a, b=0;
    cout << "Enter a Value: ";
    cin >> a;
    cout<<endl;
    for(int i=0; i<20; i++)
        if(arr[i]==a)
            b++;
            if(a>1)
       { cout <<"Value found "<< b << " times" << endl; }
    else
        cout <<"Value found "<< b << " time" << endl;
}


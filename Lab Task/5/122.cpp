#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int a = 0;
    int b = 0;
    int arrSize;
    cout << "array size : ";
    cin >> arrSize;
    cout << "index values" << endl;
    for(int i = 0; i<arrSize; i++)
        {
        cout << "Index [" << i << "] : ";
        cin >> arr[i];
    }

    for(int i=0; i<arrSize; i++)
        {
        for(a=i+1; a<arrSize; a++)
        {
            if(arr[a]==arr[i]){
                for(b=a; b<arrSize; b++)
                {
                    arr[b]=arr[b+1];
                }
                arrSize--;
                a--;
            }
        }
    }
    cout << "Array values : ";
    for(int i=0; i<arrSize; i++)
    {
        cout << arr[i] << "  ";
    }

}


#include <iostream>
using namespace std;
int main()
{
    int arrone[5]={10,20,30,40,50};
    int arrtwo[8]={1,2,3,4,5,6,7,8};
    cout<<"Array_1 = {10,20,30,40,50}"<<endl;
    cout<<"Array_2 = {1,2,3,4,5,6,7,8}"<<endl<<endl<<endl;
    int arrmerge[13];
    int a = 0;
    for(int i=0; i<13; i++){
        if(i<5)
            {
            arrmerge[i]=arrone[i];
        }
        else
            {
            arrmerge[i]=arrtwo[a];
            a++;
            }
    }
    cout << "Output: ";
    for(int i=12; i>=0; i--)
        {
        cout << arrmerge[i] << " ";
    } cout<<endl<<endl;
}


#include <iostream>
using namespace std;

int main()
{
    int x,y,sum = 0;
    cout << "Input smaller number of range : " ;
    cin >> x;
    cout << "Input bigger number of range : " ;
    cin >> y;
    cout << "Sum of Even Numbers : ";
    for (int i = x; i<=y; i++){
        if(i%2 == 0){
            sum = sum + x;
        }
    }
    cout << " = " << sum << endl;
}

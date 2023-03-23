#include <iostream>
using namespace std;
int main ()
{
int[] egArray = { 2, 4, 6, 8, 10, 1, 3, 5, 7, 9 };
for ( int index= 0 ; index < egArray.length ; index = index + 2 )
{
    for ( int index= 0 ; index < egArray.length ; index = index + 2 )
    {
        cout<<( egArray[ index ] + " " );
    }
}
}

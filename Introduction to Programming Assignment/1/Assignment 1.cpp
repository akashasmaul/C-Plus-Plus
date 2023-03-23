#include <iostream>
using namespace std;
int main()
{
    float phy, chem, bio, per,sum;
    phy = 91.00;
    chem = 87.45;
    bio = 51.00;
    sum = phy+chem+bio;
    cout<<"Total Marks: "<<sum<<endl;
    per = (sum*100)/300;
    cout<<"The student obtained "<<per<<"% marks";
}

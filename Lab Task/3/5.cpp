#include <iostream>
using namespace std;
int main ()
{
    float phy, math;
    int age;
    cout<<"Enter you age: ";
    cin>>age;
    if (age<18)
        cout<<"Sorry, due to the age is less than the requirement, your admission is not possible."<<endl;
    else{
        cout<<"Enter the marks you got on Physics: ";
        cin>>phy;
        cout<<"Enter the marks you got on Math: ";
        cin>>math;
        if(phy>=80 && math>=80)
            cout<<"Congratulations. You're applicable for admission."<<endl;
        else
            cout<<"Sorry, due to not matching the information with the minimum requirement, your admission is not possible  "<<endl;
}



}



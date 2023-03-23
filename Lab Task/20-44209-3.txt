#include <iostream>
using namespace std;
//storage for name
string name[3] = {"John","Mark","Brown"};
//storage for id
string id[3] = {"111","222","333"};
//storage for balance, initially set to all 0
int amount[3] = {0,0,0};
//function to show information of a specific user according to id
void showOne(string a)
{
    for(int i=0;i<3;i++)
    {
        if(id[i] == a)
        {
            cout<<"Name -> "<<name[i]<<endl;
            cout<<"Balance -> "<<amount[i]<<endl;
        }
    }
}
void deposit(string a, int tk)
{
    for(int i=0;i<3;i++)
    {
        if(id[i] == a && tk>0)
        {
            amount[i]= amount[i]+tk;
        }
    }
}

void withdraw(string a, int tk)
{
    for(int i=0;i<3;i++)
    {
        if(id[i] == a && tk>0 && amount[i]>tk)
        {
            amount[i]= amount[i]-tk;
        }
    }
}
//function to show information of all the users
void showAll()
{
    for(int i=0;i<3;i++)
    {
        cout<<"ID -> "<<id[i]<<endl;
        cout<<"Name -> "<<name[i]<<endl;
        cout<<"Balance -> "<<amount[i]<<endl;
    }
}


int main()
{
    //Show information of user with id = "111"
    deposit("111",2000);
    showOne("111");
    withdraw("111",1000);
    //Show information of user with id = "222"
    deposit("222",1000);
    //Show information of user with id = "333"
    deposit("333",1000);

   //Show information of all the users
    showAll();
}

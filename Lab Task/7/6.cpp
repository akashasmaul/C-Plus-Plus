#include <iostream>
using namespace std;
int toa=0;
class user
{
private:
string Name;
string NID;
string DOB;
double balance;
public:

   void setName(string a){Name=a;}
   string getName(){return Name;}
   void setNID(string a){NID=a;}
   string getNID(){return NID;}
   void setDOB(string a){DOB=a;}
   string getDOB(){return DOB;}
   void setBalance(double a){balance=a;}
   double getBalance(){return balance;}


};

user database[50];
class Database:public user
{

public:
  void createuser()
   {
  cout<<"Enter name:";
  string p;
  cin>>p;

  cout<<"Enter NID:";
  string q;
  cin>>q;

  cout<<"Enter DOB:";
  string r;
  cin>>r;

  cout<<"balance: ";
  double s;
  cin>>s;

  database[toa].setName(p);
  database[toa].setNID(q);
  database[toa].setDOB(r);
  database[toa].setBalance(s);
  toa++;
}
   void showuserinfoall()
{
   for(int i=0;i<toa;i++)
{
   cout<<"Name: "<<database[i].getName()<<endl;
   cout<<"NID: "<<database[i].getNID()<<endl;
   cout<<"DOB: "<<database[i].getDOB()<<endl;
   cout<<"balance: "<<database[i].getBalance()<<endl;
}
}
void showUserInfo()
    {
        cout<<"Enter the NID of the user whose information you want to see: ";
        string a;
        cin>>a;
        for(int i=0;i<toa;i++)
        {
            if(database[i].getNID()== a)
            {
                cout<<"Name: "<<database[i].getName()<<endl;
                cout<<"NID: "<<database[i].getNID()<<endl;
                cout<<"DOB: "<<database[i].getDOB()<<endl;
                cout<<"Balance: "<<database[i].getBalance()<<endl;
            }
            if(database[i].getNID() != a)
                 {

            cout<<"NID not found!"<<endl;

               }

        }
    }};

int main()
{
    Database ob;
    ob.createuser();
    ob.showuserinfoall();
    ob.showUserInfo();
}

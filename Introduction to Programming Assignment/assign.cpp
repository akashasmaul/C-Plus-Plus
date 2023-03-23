#include <iostream>
using namespace std;
int toa=0;
int op;
class user
{
private:
    string name;
    string nid;
    string dob;
    double balance;

public:
    void setName (string a)
    {
        name=a;
    }
    string getName ()
    {
        return name;
    }
    void setNid (string a)
    {
        nid=a;
    }
    string getNid ()
    {
        return nid;
    }
    void setDob (string a)
    {
        dob=a;
    }
    string getDob ()
    {
        return dob;
    }
    void setBal (double a=0)
    {
        balance=a;
    }
    double getBal ()
    {
        return balance;
    }
};
user number [100];
class database:public user
{
public:
    void createUser ()
    {
        cout<<"Creating User Account"<<endl;
        cout << "Input Name: ";
        string x;
        cin>>x;
        cout<<"Input NID: ";
        string y;
        cin>>y;
        cout<<"Input Date of Birth: ";
        string z;
        cin>>z;
        cout<<"Input Credit: ";
        double d;
        cin>>d;

        number[toa].setName(x);
        number[toa].setNid(y);
        number[toa].setDob(z);
        number[toa].setBal(d);
        toa++;

        cout<<endl;
    }
    void showUserInfoAll ()
    {
        cout<<"Showing all users info"<<endl;
        for(int i=0; i<toa; i++)
        {
            cout<<"Name: "<<number[i].getName()<<endl;
            cout<<"Date of Birth: "<<number[i].getDob()<<endl;
            cout<<"Balance: "<<number[i].getBal()<<endl;
        }
        cout<<endl;
    }
    void showUserInfo ()
    {
        cout << "Enter NID to view details: " ;
        string s;
        cin>>s;
        cout<<endl<<"Showing details of NID-****"<<endl;
        for(int i=0; i<toa; i++)
        {
            if(number[i].getNid()==s)
            {
                cout<<"Name: "<<number[i].getName()<<endl;
                cout<<"Date of Birth: "<<number[i].getDob()<<endl;
                cout<<"Balance: "<<number[i].getBal()<<endl;
                cout<<endl;
            }
            else
            {
                cout<<"Wrong NID";
            };
        }
        cout<<endl;
    }

    void withdraw ()
    {
        cout<<"Enter NID to withdraw money: ";
        string n;
        cin>>n;
        for(int i=0; i<toa; i++)
        {
            if(number[i].getNid()==n)
            {
                cout<<"Enter Amount of withdrawl: ";
                double a;
                cin>>a;
                double amount = number[i].getBal()- a;
                number[i].setBal(amount);
                cout<<endl;
            }
            else cout<<"Wrong input, are you trying to hack?"<<endl;
        }
    }
    void deposit ()
    {
        cout<<"Enter NID to deposit money: ";
        string m;
        cin>>m;
        for(int i=0; i<toa; i++)
        {
            if(number[i].getNid()==m)
            {
                cout<<"Enter Amount of Deposit: ";
                double b;
                cin>>b;
                double amt = number[i].getBal()+ b;
                number[i].setBal(amt);
                cout<<endl;

            }
            else
            {
                cout<<"Like seriously dude, u want to put your money on others account?";
            }
        }
        cout<<endl;
    }
    void deleteUser()
    {
        int pos=-1;
        cout<<"Enter the NID of the user whose information you want to delete: ";
        string p;
        cin>>p;
        for(int i=0; i<toa; i++)
        {
            if(number[i].getNid()==p)
            {
                pos=i;
                cout<<"User info delete successful!"<<endl;
                break;
            }
        }
        if(pos>-1)
        {
            for(int i=pos; i<toa; i++)
            {
                number[i]=number[i+1];
            }
            toa--;
        }
        else
        {
            cout<<"ID not found!"<<endl;
        }

    }
    void balance ()
    {
        for(int i=0; i<toa; i++)
        {
            cout<<"Balance: "<<number[i].getBal()<<endl;
        }
        cout<<endl;
    }
};
void option()
{
    cout<<"Input your option: ";
    cin>>op;
    cout<<endl;
}
int main()
{
    database ob;
    ob.createUser ();
    ob.showUserInfoAll();
    cout<<"Select 1 to check balance"<<endl;
    cout<<"Select 2 to withdraw"<<endl;
    cout<<"Select 3 to deposit"<<endl;
    cout<<"Select 4 to view your information"<<endl;
    cout<<"Select 5 to delete your account"<<endl;
    for(int i=0; i<toa; i++)
    {
        option();
        if (op==1)
        {
            ob.balance();
        }
         if (op==2)
        {
            ob.withdraw ();
        }
         if (op==3)
        {
            ob.deposit ();
        }
         if (op==4)
        {
            ob.showUserInfo ();
        }
         if (op==5)
        {
            ob.deleteUser();
        }

        continue;
    }
}


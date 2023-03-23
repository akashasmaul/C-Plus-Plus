#include <iostream>
using namespace std;
int toa=0;
class student
{
    string name;
    string id;
    int age;
public:
    void setName(string a){name=a;}
    string getName(){return name;}
    void setId(string a){id=a;}
    string getId(){return id;}
    void setAge(int a){age=a;}
    int getAge(){return age;}
    void print(student *p)
    {
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Age: "<<age<<endl;
    }
};
student database[100];
class handle:public student
{
public:
   void createUser()
   {
       cout<<"Enter name:";
       string a;
       cin>>a;
       database[toa].setName(a);



       cout<<"Enter ID: ";
       string b;
       cin>>b;
       database[toa].setId(b);



       cout<<"Enter Age:";
       int x;
       cin>>x;
       database[toa].setAge(x);
       toa++;
   }



};
int main()
{
    handle ob;
    char c;
    for(int i=0;;i++)
    {
        ob.createUser();
        cout<<"Do you want to continue(y/n): ";
        cin>>c;
        if(c == 'n' || c == 'N')
        {
            break;
        }
        else
        {
            continue;
        }
    }
}

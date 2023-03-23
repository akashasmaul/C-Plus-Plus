#include <iostream>
using namespace std;
int toa=0;
class person
{
protected:
    string name;
    int age;
public:
    void setName (string a) {name=a;}
    string getName () {return name;}
    void setAge (int a) {age=a;}
    int getAge () {return age;}
};
class employee: public person
{
protected:
    string joiningDate;
    double salary;
public:
    void setJD (string a) {joiningDate=a;}
    string getJD () {return joiningDate;}
    void setSal (double a) {salary=a;}
    double getSal() {return salary;}
};
class department : public employee
{
    protected:
    int id;
    string deptName ;
    string  position;
    public:
        void setId (int a) {id=a;}
        int getId () {return id;}
        void setDN (string a) {deptName=a;}
        string getDN () {return deptName;}
        void setPos (string a) {position=a;}
        string getpos () {return position;}
void print()
    {
        cout<<"Department: "<<deptName<<endl;
        cout<<"Position: "<<position<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Salary: "<<salary<<endl<<endl;
    }

} ;
int main ()
{
department ob,ob1,ob2;
ob.setName ("Akash");
ob.setAge (21);
ob.setId (101);
ob.setDN ("Science and Techmnoly");
ob.setPos ("Dept Head");
ob.setSal (123456);
ob.print();

ob1.setName ("Avro");
ob1.setAge (25);
ob1.setId (102);
ob1.setDN ("Science and Techmnoly");
ob1.setPos ("Manger");
ob1.setSal (23456);
ob1.print();

ob2.setName ("Alen");
ob2.setAge (38);
ob2.setId (103);
ob2.setDN ("Science and Techmnoly");
ob2.setPos ("Clerk");
ob2.setSal (3456);
ob2.print();
}


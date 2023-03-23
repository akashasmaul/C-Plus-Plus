#include<iostream>
using namespace std;

class person
{
protected:
    string name;
    string id;
    string email;
    string specialization;
public:
    void setName(string a){name=a;}
    string getName(){return name;}
    void setId(string a){id=a;}
    string getId(){return id;}
    void setEmail(string a){email=a;}
    string getEmail(){return email;}
    void setSpec(string a){specialization=a;}
    string getSpec(){return specialization;}

    void print()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"E-mail: "<<email<<endl;
        cout<<"Specialization: "<<specialization<<endl;
    }

};

class Doctor:public person
{
protected:
    double noSurgery;
public:
    void setNosurgery(double a){noSurgery=a;}
    double getNosurgery(){return noSurgery;}

    void print()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"E-mail: "<<email<<endl;
        cout<<"Specialization: "<<specialization<<endl;
        cout<<"Numeber of Surgery: "<<noSurgery<<endl;
    }

};

class Teacher:public person
{
protected:
    string schoolName;
public:
    void setSchoolname(string a){schoolName=a;}
    string getSchoolname(){return schoolName;}

    void print()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"E-mail: "<<email<<endl;
        cout<<"Specialization: "<<specialization<<endl;
        cout<<"School Name: "<<schoolName<<endl;
    }
};

int main()
{
    cout<<"Doctor's info: "<<endl;
    Doctor ob;
    ob.setName("Asmaul Akash");
    ob.setId("1003");
    ob.setEmail("xxxxx@gmail.com");
    ob.setSpec("Medicine");
    ob.setNosurgery(42);
    ob.print();

    cout<<endl;

    cout<<"Teacher's info: "<<endl;
    Teacher ob1;
    ob1.setName("Avro Alen");
    ob1.setId("1005");
    ob1.setEmail("yyyyy@gmail.com");
    ob1.setSpec("Computer Science");
    ob1.setSchoolname("Dhanmondi Gov't boys' School");
    ob1.print();

}

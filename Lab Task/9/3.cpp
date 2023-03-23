#include <iostream>
using namespace std;
class person
{
private:
string name;
int id;
int age;
public:
void setName(string a){name=a;}
string getName(){return name;}
void setAge(int a){age=a;}
int getAge(){return age;}
person(int a){id=a;}
int getid(){return id;}
void print() {
cout <<"Name: " <<getName() <<endl<<"ID: "<<getid() << endl<<"Age: "<<getAge()<<endl;
}};
class employee:public person
{
protected:
int salary;
public:
    employee(int a):person(a){}
    void setSalary(int a){salary=a;}
    int getSalary(){return salary;}
    void employeeinfo()
    {
        cout<< "Salary: "<< salary<< endl;
    }
};
int main ()
{
employee ob(101);
ob.setName("Akash");
ob.setAge(21);
ob.setSalary(25000);
ob.print();
ob.employeeinfo();
}

#include <iostream>
using namespace std;
class person
{
private:
string name;
int age;
string dob;
public:
void setName(string a){name=a;}
string getName(){return name;}
void setAge(int a){age=a;}
int getAge(){return age;}
void setDob(string a){dob=a;}
string getDob(){return dob;}
void print() {
cout << "Name: " << getName() <<endl << "Age: " << getAge() << endl<< "Date of Birth: " << getDob()<<endl;
}};
class employee:public person
{
private:
float sal;
public:
void setSal(float a){sal=a;}
float getSal(){return sal;}
void printEmpInfo()
    {
        cout << "Salary: " << getSal () <<endl;
    }
};
int main ()
{
employee ob;
ob.setName("John");
ob.setAge(29);
ob.setDob("18-November-1999");
ob.setSal(12343.76);
ob.print();
ob.printEmpInfo();
}

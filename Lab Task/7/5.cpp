#include <iostream>
using namespace std;
class student
{
private:
    string Name;
    int Age;
    string Dob;
    double Cgpa;
    int noofcoursetaken;
public:
void setName(string p){Name=p;}
string getName(){return Name;}
void setAge(int p){Age=p;}
int getAge(){return Age;}
void setDob(string p){Dob=p;}
string getDob(){return Dob;}
void setCgpa(double p){Cgpa=p;}
double getCgpa(){return Cgpa;}
void setnoofcoursetaken(int p){noofcoursetaken=p;}
int getnoofcoursetaken(){return noofcoursetaken;}
void print(){cout<<"Name: "<<Name<<endl<<"Age: "<<Age<<endl<<"Date of birth: "<<Dob<<endl<<"CGPA: "<<Cgpa<<endl<<"Number of course taken: "<<noofcoursetaken<<endl<<endl;}
};
int main()
{
student ob;
ob.setName("Akash");
ob.setAge(21);
ob.setDob("18-11-2001");
ob.setCgpa(10.00);
ob.setnoofcoursetaken(5);
ob.print();
}

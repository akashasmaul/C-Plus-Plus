#include <iostream>
using namespace std;
class student
{
private:
string Name;
int Age;
string Dob;
double Cgpa;
int CourseTaken;
int Id;public:
void setName(string a){Name=a;}
string getName(){return Name;}
void setAge(int a){Age=a;}
int getAge(){return Age;}
void setDob(string a){Dob=a;}
string getDob(){return Dob;}
void setCgpa(double a){Cgpa=a;}
double getCgpa(){return Cgpa;}
void setCourseTaken(int a){CourseTaken=a;}
int getCourseTaken(){return CourseTaken;}
void setId(string a){Id=a;}
string getId(){return Id;}void print(){
cout << "Name : " << getName() << endl;
cout << "Age : " << getAge() << endl;
cout << "DOB : " << getDob() << endl;
cout << "CGPA : " << getCgpa() << endl;
cout << "Courses Taken : " << getCourseTaken() << endl;
cout << endl << endl;
}
};
int main()
{student ob[10];
ob[0].setName("Labiba Ibnat");
ob[0].setAge(19);
ob[0].setCgpa(4.00);
ob[0].setDob("17-08-2001");
ob[0].setCourseTaken(13);
ob[0].setId("101");
ob[1].setName("Tasnim Khan");
ob[1].setAge(21);
ob[1].setCgpa(3.93);
ob[1].setDob("11-12-2000");
ob[1].setCourseTaken(12);
ob[1].setId("102");
ob[2].setName("Rubyea Zannat");
ob[2].setAge(20);
ob[2].setCgpa(4.00);
ob[2].setDob("25-02-2001");
ob[2].setCourseTaken(14);
ob[2].setId("103");
ob[3].setName("Adnan Suvro");
ob[3].setAge(22);
ob[3].setCgpa(3.59);
ob[3].setDob("10-07-1999");
ob[3].setCourseTaken(16);
ob[3].setId("104");
ob[4].setName("Rahat Islam");
ob[4].setAge(21);
ob[4].setCgpa(3.43);
ob[4].setDob("03-02-2000");
ob[4].setCourseTaken(16);
ob[4].setId("105");for(int i = 0;; i++){
cout << "Available id's to show(type 'exit' to exit) : 111, 112, 113, 114, 115" << endl;
string s;
getline(cin,s);
for(int j=0; j<5; j++){
if(ob[j].getId()==s){
ob[j].print();
}
}
if(s=="exit") break;}}

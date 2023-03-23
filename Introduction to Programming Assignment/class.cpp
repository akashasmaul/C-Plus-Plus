#include <iostream>
using namespace std;
class universal
{
private:
string name;
int age;
string id;
public:
void setName(string a){name=a;}
string getName(){return name;}
void setAge(int a){age=a;}
int getAge(){return age;}

void setId(string a){id=a;}
string getId(){return id;}
void print(){
cout << "Name: " << getName() <<endl << "ID: "<< getId () << endl << "Age : " << getAge() << endl;
}};
class bowler: public universal
{
private:
    float bspd;
    public:
void setBspd(float a){bspd=a;}
float getBspd(){return bspd;}
void pfbs() {cout<< "Bowling Speed: " << getBspd() << endl;}
};

int main()
{
bowler ob[10];
ob[0].setName("Shakib Al Hasan");
ob[0].setAge(41);
ob[0].setId("111");
ob[0].setBspd(141);
ob[1].setName("Mashrafi");
ob[1].setAge(54);
ob[1].setId("112");
ob[1].setBspd(141);
ob[2].setName("Mustafiz");
ob[2].setAge(45);
ob[2].setId("113");
ob[2].setBspd(191);
for(int i = 0;; i++){
cout << "Available id: 111, 112, 113" << "(type 'exit' to exit)" << endl;
string s;
getline(cin,s);
for(int i=0; i<4; i++){
if(ob[i].getId()==s){
ob[i].print();
}
}
if(s=="exit") break;
}}

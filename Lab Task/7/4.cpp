#include <iostream>
using namespace std;
class employee
{
private:
    string nam;
    int age;
    string nid;
    int sal;
public:
    void setname(string a) { nam=a;}
    string getname() {return nam;}
    void setage (int b) {age=b;}
    int getage () {return age;}
    void setnid (string c) {nid=c;}
    string getnid () {return nid;}
    void setsal (int d) {sal=d;}
    int getsal() {return sal;}
    void prnt() {cout<<"Name: "<<nam<<endl<<"Age: "<<age<<endl<<"NID No.: "<<nid<<endl<<"Salary: "<<sal;}
};
int main()
{
    employee ob;
    ob.setname("Akash");
    ob.setage (21);
    ob.setnid ("**************");
    ob.setsal(0);
    ob.prnt();

}

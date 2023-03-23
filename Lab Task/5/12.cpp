#include <iostream>
using namespace std;

int add(int a, int b)
{
return (a+b);
}
int sub(int a, int b)
{
return (a-b);
}
int mult(int a, int b)
{
return (a*b);
}
int divi(int a, int b)
{
return (a/b);
}
void option()
{
cout<<"1. Add"<<endl;
cout<<"2. Subtraction"<<endl;
cout<<"3. Multiplication"<<endl;
cout<<"4. Division"<<endl;
}
void input()
{
option();
cout<<"Enter option: ";
int op;
cin>>op;
switch(op)
{
case 1:
{
cout<<add(2,3)<<endl;
break;
}

 case 2:
{
cout<<sub(2,3)<<endl;
break;
}
case 3:
{
cout<<mult(2,3)<<endl;
break;
}
case 4:
{
cout<<divi(4,2)<<endl;
break;
}
default:
{
cout<<"Wrong option"<<endl;
}
}
}
void handle()
{
for(int i=0;;i++)
{
input();
cout<<"Do you want to continue (y/n): ";
char ch;
cin>>ch;
if(ch == 'Y'||ch == 'y')
{
continue;
}
else if(ch == 'N'||ch == 'n')
{
break;
}
else
{
cout<<"Wrong input"<<endl;
}
}
}
int main()
{
handle();
}

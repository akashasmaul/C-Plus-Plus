#include <iostream>
using namespace std;
int main()
{
    int option;
    cout<<"Press 1 to see the syntax of declaring a variable"<<endl;
    cout<<"Press 2 to see the syntax of using an if() block"<<endl;
    cout<<"Press 3 to see how you can print the address of a variable"<<endl;
    cout<<"Press 4:to see the logic that can be used to determine whether a value is odd or even"<<endl;
    cin>>option;
    switch(option)
    {
        case 1:
            cout<<"  int x;\n  x = 4"<<endl;
            break;
        case 2:
            cout<<"\n if(condition)\n { //block of condition to be executed if the condition is true otherwise \n }\n else\n {\n }"<<endl;
            break;
        case 3:
            cout<<" int x;\n cout<<&x;"<<endl;
            break;
        case 4:
            cout<<" if(y%2==0)\n {\n cout<<'The number you entered is Even';\n }\n else\n {\n cout<<'The number you entered is Odd';\n } "<<endl;
    }

}

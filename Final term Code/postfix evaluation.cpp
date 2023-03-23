#include <iostream>
#include<math.h>

using namespace std;
//isEmpty
//isFull
//push
//pop
//print


//Stack in object oriented approach
class MyStack
{
    int *Stack=new int[5];
    int top=0,maxSize=5;
public:
    bool isEmpty()
    {
        if(top==0)
        {
            return true;
        }
        return false;
    }
    bool isFull()
    {
        if(top==maxSize)
        {
            return true;
        }
        return false;
    }
    void push(int value)
    {
        if(isFull())
        {
            cout<<"Stack is full"<<endl;
        }
        else
        {
//            Stack[top]=value;
//            top++;
              Stack[top++]=value;
        }
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            top--;
        }
    }
    void print()
    {
        for(int i=top-1;i>=0;i--)
        {
            cout<<Stack[i]<<endl;

        }
        cout<<"==================="<<endl;
    }
    int getTopElement()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        else
        {
            return Stack[top-1];
        }
    }


};

int main()
{
    MyStack ms;
    int a,b;
    string Exp="2*3+(8*2)-(9/3)";
    string postfixExp= "23*82*+93/-";
    for (int i=0; i<postfixExp.size(); i++)
    {
        if (postfixExp[i]>='0' && postfixExp[i]<='9')
        {
            ms.push(postfixExp[i]-48);
        }
        else
        {
            b=ms.getTopElement();
            ms.pop();
            a=ms.getTopElement();
            ms.pop();
            if(postfixExp[i]=='+')
                ms.push(a+b);
            else if(postfixExp[i]=='-')
                ms.push(a-b);
            else if(postfixExp[i]=='*')
                ms.push(a*b);
            else if(postfixExp[i]=='/')
                ms.push(a/b);
            else if(postfixExp[i]=='%')
                ms.push(a%b);
            else if(postfixExp[i]=='^')
                ms.push(pow(a,b));
        }
    }
    cout<<"Postfix Expression: "<< postfixExp<<endl;
     cout<<"Evaluated Expression: "<< ms.getTopElement()<<endl;




    return 0;
}

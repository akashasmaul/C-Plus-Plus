#include <iostream>
#include<math.h>

using namespace std;

//Stack in object oriented approach
class MyStack
{
    char *Stack=new char[50];
    int top=0,maxSize=50;
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
    void push(char value)
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
    char getTopElement()
    {
        if(isEmpty())
        {
         //   cout<<"Stack is empty"<<endl;
            return '\0';
        }
        else
        {
            return Stack[top-1];
        }
    }
};

int precedanceCheck(char c)
{
    if(c=='^')return 3;
    else if(c=='*' || c=='/')return 2;
    else if(c=='+' || c=='-')return 1;
    else return 0;
}


int main()
{
    string exp="2*3+(8*2)-(9/3)";
    string reverseExp;
    string output;
    string op;
    string reversedOutput;
    MyStack ms;
    for(int i=exp.size()-1;i>=0;i--)
    {
        if(exp[i]==')')
        {
            reverseExp+='(';
        }
        else if(exp[i]=='(')
        {
            reverseExp+=')';
        }
        else
           reverseExp+= exp[i];
    }
  //  cout<<"Infix:"<<exp<<endl;
 //   cout<<"Reverse:"<<reverseExp<<endl;
    for(int i=0;i<reverseExp.size();i++)
    {
        if((reverseExp[i]>='0' && reverseExp[i]<='9') || (reverseExp[i]>='a' && reverseExp[i]<='z') || (reverseExp[i]>='A' && reverseExp[i]<='Z'))
        {
            output+=reverseExp[i];
        }
        else if(reverseExp[i]=='(')
        {
            ms.push(reverseExp[i]);
        }
        else if(reverseExp[i]==')')
        {
            while(ms.getTopElement()!='(')
            {
                output+=ms.getTopElement();
                ms.pop();
            }
            ms.pop();
        }
        else
        {
            while(precedanceCheck(reverseExp[i])<precedanceCheck(ms.getTopElement()))
            {
                output+=ms.getTopElement();
                ms.pop();
            }
            ms.push(reverseExp[i]);
        }
    }

    while(!ms.isEmpty())
    {
        output+=ms.getTopElement();
        ms.pop();
    }
    for(int i=output.size()-1;i>=0;i--)
    {
        if(output[i]==')')
        {
            reversedOutput+='(';
        }
        else if(output[i]=='(')
        {
            reversedOutput+=')';
        }
        else
           reversedOutput+= output[i];
    }

    for(int i=0;i<exp.size();i++)
    {
        if((exp[i]>='0' && exp[i]<='9') || (exp[i]>='a' && exp[i]<='z') || (exp[i]>='A' && exp[i]<='Z'))
        {
            op+=exp[i];
        }
        else if(exp[i]=='(')
        {
            ms.push(exp[i]);
        }
        else if(exp[i]==')')
        {
            while(ms.getTopElement()!='(')
            {
                op+=ms.getTopElement();
                ms.pop();
            }
            ms.pop();
        }
        else
        {
            while(precedanceCheck(exp[i])<=precedanceCheck(ms.getTopElement()))
            {
                op+=ms.getTopElement();
                ms.pop();
            }
            ms.push(exp[i]);
        }
    }

    while(!ms.isEmpty())
    {
        op+=ms.getTopElement();
        ms.pop();
    }
    int a,b;
    for(int i=0;i<op.size();i++)
    {
        if(op[i]>='0' && op[i]<='9')
        {
            ms.push(op[i]-48);
        }
        else
        {
            b=ms.getTopElement();
            ms.pop();
            a=ms.getTopElement();
            ms.pop();
            if(op[i]=='+')
                ms.push(a+b);
            else if (op[i]=='-')
                ms.push(a-b);
            else if (op[i]=='*')
                ms.push(a*b);
            else if (op[i]=='/')
                ms.push(a/b);
            else if (op[i]=='%')
                ms.push(a%b);
            else if (op[i]=='^')
                ms.push(pow(a,b));
        }
    }

    cout<<"Infix Expression: "<<exp<<endl;
    cout<<"Postfix Expression: "<<op<<endl;
    cout<<"Prefix Expression: "<<reversedOutput<<endl;
    cout<<"Evaluated Value: "<<ms.getTopElement()<<endl;
    return 0;
}

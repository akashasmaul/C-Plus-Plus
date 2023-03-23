#include <iostream>
using namespace std;

class MyStack
{
    string exp = "5 + ((2 * 3) + 4)";

    string Stack[100];
    int top=0,maxSize=exp.length();
public:
     bool Full()
    {
        if(top==maxSize)
        {
            return true;
        }
        return false;
    }

    bool Empty()
    {
        if(top==0)
        {
            return true;
        }
        return false;
    }

    void push(string expp)
    {

        if(Full())
        {
            cout<<"Stack is full"<<endl;
        }
        else
        {

            Stack[top++]=expp;
        }
    }

    void pop()
    {
        if(Empty())
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
        for(int i=top-1; i>=0; i--)
        {
            cout<<Stack[i]<<endl;

        }
        cout<<"==================="<<endl;
    }

bool checkExp() {

   for (int i=0; i<exp.length(); i++) {
       if(exp == '(' || exp == '(' || exp == '(' ) {
         Stack.push(exp);
         continue;
      }
      if (isEmpty())
         return false;
      switch (Stack[i]) {
      case ')':
        Stack.pop();
         if (top=='{' || top=='[')
            return false;
         break;
      case '}':
         Stack.pop();
         if (top=='(' || top=='[')
            return false;
         break;
      case ']':
         Stack.pop();
         if (top =='(' || top == '{')
            return false;
         break;
      }
   }
   return (Stack.isEmpty());
}
   };
int main() {

   if (checkExp(exp))
      cout << "Expression has Valid Parenthesis.";
   else
      cout << "Expression has Invalid Parenthesis.";
}

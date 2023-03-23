#include <iostream>
#include<math.h>
using namespace std;

class MyQueue
{
public:
char *Queue=new char[50],front=-1,rear=-1,count=0,maxSize=5;

    bool isEmpty()
    {
        if(front==-1 && rear==-1)
        {
            return true;

        }
        return false;
    }

    bool isFull()
    {
        if(rear==maxSize-1)
        {
            return true;
        }
        return false;
    }
    void enQueue(char value)
    {
        while(isFull())
        {
            cout<<"Queue is full"<<endl;
            break;
        }

        if(isEmpty())
        {
            front=rear=0;
            Queue[rear]=value;
        }
        else
        {
            rear++;

            Queue[rear]=value;
        }
    }
    void deQueue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
        }

       if(front==rear && front!=-1)
        {
            front=rear=-1;
        }
        else
        {
            front++;
        }
    }
    void print()
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<Queue[i]<<" ";
        }
        cout<<endl<<"=============="<<endl;
    }

    char getTopElement()
    {

           return Queue[front];
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
    string postfixExp="23*82+*93-/";
    MyQueue ms;
    int a,b;
    for(int i=0;i<postfixExp.size();i++)
    {
        if(postfixExp[i]>='0' && postfixExp[i]<='9')
        {
            ms.enQueue(postfixExp[i]-48);
        }
        else
        {
            a=ms.getTopElement();
            ms.deQueue();
            b=ms.getTopElement();
            ms.deQueue();
            if(postfixExp[i]=='+')
                ms.enQueue(a+b);
            else if (postfixExp[i]=='-')
                ms.enQueue(a-b);
            else if (postfixExp[i]=='*')
                ms.enQueue(a*b);
            else if (postfixExp[i]=='/')
                ms.enQueue(a/b);
            else if (postfixExp[i]=='%')
                ms.enQueue(a%b);
            else if (postfixExp[i]=='^')
                ms.enQueue(pow(a,b));
        }
    }
    cout<<"Postfix Expression: "<<postfixExp<<endl;
    cout<<"Evaluated Value: "<<ms.getTopElement()<<endl;
    return 0;
}

#include <iostream>
#include<math.h>
using namespace std;

class MyQueue // FIFO
{
    char *Queue= new char[50];
    int front=-1,rear=-1,maxSize=50;

public:
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

    void enQueue(int value)
    {
        if(isFull())
        {
            cout<<"Queue is full"<<endl;
        }
        else if(isEmpty())
        {
            front=rear=0;
            Queue[rear]=value;
        }
        else
        {
            Queue[rear]=value;
            rear++;
        }
    }

    void deQueue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
        }
        else if(front==rear && front!=-1)
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
        for(int i=front; i<=rear; i++)
        {
            cout<<Queue[i]<<" ";
        }
        cout<<endl<<"=============="<<endl;
    }

    char getTopElement()
    {
        if(isEmpty())
        {
            //cout<<"Queue is empty"<<endl;
            return '\0';
        }
        else
        {
            return Queue[front];
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
    string output;
    MyQueue mq;

    for(int i=0; i<exp.size(); i++)
    {
        if((exp[i]>='0' && exp[i]<='9') || (exp[i]>='a' && exp[i]<='z') || (exp[i]>='A' && exp[i]<='Z'))
        {
            output+=exp[i];
        }
        else if(exp[i]=='(')
        {
            mq.enQueue(exp[i]);
        }
        else if(exp[i]==')')
        {
            while(mq.getTopElement()!='(')
            {
                output+=mq.getTopElement();
                mq.deQueue();
            }

            mq.deQueue();

        }
        else
        {
            while(precedanceCheck(exp[i])<=precedanceCheck(mq.getTopElement()))
            {
                output+=mq.getTopElement();
                mq.deQueue();
            }
            mq.enQueue(exp[i]);
        }
    }

    while(!mq.isEmpty())
    {
        output+=mq.getTopElement();
        mq.deQueue();
    }
    cout<<"Infix Expression: "<<exp<<endl;
    cout<<"Postfix Expression: "<<output<<endl;

    MyQueue ms;
    //  string output="23*82*+93/-";
    int a,b;

    for (int i=0; i<output.size(); i++)
    {
        if (output[i]>='0' && output[i]<='9')
        {
            ms.enQueue(output[i]-48);
        }
        else
        {
            b=ms.getTopElement();
            ms.deQueue();
            a=ms.getTopElement();
            ms.deQueue();
            if(output[i]=='+')
                ms.enQueue(a+b);
            else if(output[i]=='-')
                ms.enQueue(a-b);
            else if(output[i]=='*')
                ms.enQueue(a*b);
            else if(output[i]=='/')
                ms.enQueue(a/b);
            else if(output[i]=='%')
                ms.enQueue(a%b);
            else if(output[i]=='^')
                ms.enQueue(pow(a,b));
        }
    }
    cout<<"Postfix Expression: "<< output<<endl;
    cout<<"Evaluated Expression: "<< ms.getTopElement()<<endl;


    return 0;
}

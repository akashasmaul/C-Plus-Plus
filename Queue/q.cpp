#include <iostream>
using namespace std;

class MyQueue
{
    int *Queue = new int[5];
    int front=-1,rear=-1,maxSize=5;
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
        for(int i=front;i<=rear;i++)
        {
            cout<<Queue[i]<<" ";
        }
        cout<<endl<<"=============="<<endl;
    }

    void resize(int size)
    {
        int *tempArray=new int[maxSize];
            for(int i=0;i<rear; i++)
        {
            tempArray[i]= Queue[i];
        }
        delete [] Queue;
        Queue=new int[maxSize+size];
        maxSize+=size;//maxSize=maxSize+size
        Queue=tempArray;
    }
};



int main()
{
    MyQueue mq;
    //mq.deQueue();
    mq.enQueue(7);
    mq.enQueue(10);
    mq.enQueue(5);
    mq.enQueue(13);
    mq.enQueue(6);
    //mq.enQueue(60);
    mq.print();
    return 0;
}
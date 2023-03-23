#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

};

class LinkedList

{
    Node *head=NULL,*current=NULL;
public:

    void insertAtFirst(int value)
    {
        Node *temp=new Node();
        temp->data=value;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            temp->next=head;
            head=temp;
        }
    }
    void insertAtLast(int value)
    {
        Node *temp=new Node();
        temp->data=value;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            current->next=temp;
            current=current->next;
        }
    }

    void displayElements()
    {
        Node *p=head;
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<endl;
    }


    void after(int value, int Svalue)
    {
        Node *temp = new Node;
        temp->data = value;
        temp->next = NULL;

        if(head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            Node *a = head;
            while (a!=NULL)
            {
                if(a->data==Svalue)
                {
                    temp->next=a->next;
                    a->next=temp;
                    break;
                }
                else
                {
                    a=a->next;
                }
            }

        }
    }



};
int main()
{
    LinkedList l;
    l.insertAtFirst(6);
    l.insertAtFirst(7);
    l.after(52,6);
    l.displayElements();
    l.insertAtLast(5);
    l.insertAtLast(10);
    l.after(59,5);


    l.displayElements();
    return 0;
}

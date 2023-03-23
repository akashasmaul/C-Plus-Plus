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
    Node* createNode(int value)
    {
        Node *temp=new Node();
        temp->data=value;
        temp->next=NULL;
        return temp;
    }
    void insertAtFirst(int value)
    {
//        Node *temp=new Node();
//        temp->data=value;
//        temp->next=NULL;
        Node *temp=createNode(value);
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
//        Node *temp=new Node();
//        temp->data=value;
//        temp->next=NULL;
        Node *temp=createNode(value);
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

    void insertAfterValue(int value,int searchValue)
    {
//        Node *temp=new Node();
//        temp->data=value;
//        temp->next=NULL;
        Node *temp=createNode(value);
        if(head==NULL)
        {
            head=temp;
            current=temp;
        }
        else
        {
            Node *p=head;
            while(p!=NULL)
            {
                if(p->data==searchValue)
                {
                    temp->next=p->next;
                    p->next=temp;
                    break;
                }
                else
                {
                    p=p->next;
                }

            }
        }
    }

    void deleteFromFirst()
    {
        Node *temp=head;
        head=head->next;
        delete temp;
    }
    void deleteFromLast()
    {
        Node *temp=head,*p;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        p=temp->next;
        temp->next=NULL;
        current=temp;
        delete p;
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

    void deleteByPosition(int pos)
    {
        Node *current=new Node;
        Node *previous=new Node;
        current=head;
        for(int i=1; i<pos; i++)
        {
            previous=current;
            current=current->next;
        }
        previous->next=current->next;
    }


    bool Remove(int k)
    {
        Node *getPTRto = new Node;
        Node* ptr = getPTRto;
        if (!ptr) return false;

        else
        {
            ptr = head;

            Node* temp = head;
            head = head->next;
            delete temp;
            return true;
        }
    }
    void deleteBySreach(int searchValue)
    {
        Node *temp=head,*p;
        while(temp->next->next!=NULL)
        {

               if(p->data==searchValue)
                {

                    temp=temp->next;
                    p=temp;
                    temp->next=p->next;
                    break;
                }
                else
                {
                    p=p->next;
                }


        }

        p=temp->next;
        temp->next=p->next;

        delete p;
    }


};
int main()
{
    LinkedList l;
    l.insertAtFirst(9);
    l.insertAtFirst(7);
    l.displayElements();
    l.insertAtLast(5);
    l.insertAtLast(10);
    l.displayElements();
    l.insertAfterValue(13,5);
    l.insertAfterValue(6,9);
    l.displayElements();
    //l.deleteFromFirst();
    //l.deleteFromFirst();
    l.deleteFromLast();
    l.deleteFromLast();
    l.displayElements();
 //   l.deleteByPosition(2);
   // l.Remove(6);
   l.deleteBySreach(6);
    l.displayElements();
    return 0;
}

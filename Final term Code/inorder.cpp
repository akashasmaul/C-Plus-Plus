#include <iostream>
using namespace std;
//Representation of node
class Node
{
public:
int data;
Node *left=NULL;
Node *right=NULL;
};




class BST
{
public:
//Node creation
Node* createNode(int value)
{
Node *ptr=new Node();
ptr->data=value;
ptr->left=NULL;
ptr->right=NULL;
return ptr;
}



Node* insertNode(Node *ptr,int value)
{
if(ptr==NULL)
{
ptr=createNode(value);
}
else if(value<ptr->data)
{
ptr->left=insertNode(ptr->left,value);
}
else if(value>ptr->data)
{
ptr->right=insertNode(ptr->right,value);
}
return ptr;
}



void inorder(Node *ptr)
{
if(ptr!=NULL)
{
inorder(ptr->left);
cout<<ptr->data<<" ";
inorder(ptr->right);
}
}

void preorder(Node *ptr)
{
if(ptr!=NULL)
{
cout<<ptr->data<<" ";
preorder(ptr->left);
preorder(ptr->right);
}
}

void postorder(Node *ptr)
{
if(ptr!=NULL)
{

postorder(ptr->left);
postorder(ptr->right);
cout<<ptr->data<<" ";
}
}

Node* findMax(Node *ptr)
{
    while(ptr->right!=NULL)
    {
        ptr=ptr->right;
    }
    return ptr;
}
Node* deleteLeaves(Node* root, int x)
{
    if (root == NULL)
        return nullptr;
    root->left = deleteLeaves(root->left, x);
    root->right = deleteLeaves(root->right, x);

    if (root->data == x && root->left == NULL &&
                          root->right == NULL) {

        return nullptr;
    }
    return root;
}
};



int main()
{
BST bst;
Node *root=bst.insertNode(NULL,20);
Node *tmp;
tmp=bst.insertNode(root,4);
tmp=bst.insertNode(root,15);
tmp=bst.insertNode(root,2);
tmp=bst.insertNode(root,6);
tmp=bst.insertNode(root,25);
tmp=bst.insertNode(root,30);
cout<<"Inorder  :";
bst.inorder(root);
cout<<endl;
cout<<"Preorder :";
bst.preorder(root);
cout<<endl;
cout<<"Postorder:";
bst.postorder(root);
cout<<endl;
cout<<"MaxValue :"<<bst.findMax(root)->data<<endl;
bst.deleteLeaves(root, 8);
cout <<"InOrder after deletion: ";
    bst.inorder(root);
return 0;
}

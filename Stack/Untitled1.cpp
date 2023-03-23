#include<iostream>
using namespace std;

#define MAX 5 //max size for stack

class Stack
{
   int top;
   public:
   string myStack[MAX]; //stack array

   Stack()

    { top = -1;
}
   bool push(string x);
    bool pop();
   bool isEmpty();
};
   //pushes element on to the stack
   bool Stack::push(string item)
   {
      if (top >= (MAX-1)) {
      cout << "Stack Overflow!!!";
      return false;
   }
else {
   myStack[++top] = item;
   cout<<item<<endl;
   return true;
   }
}

//removes or pops elements out of the stack
bool Stack::pop()
{
   if (top < 0) {
      cout << "Stack Underflow!!";
      return 0;
   }
else {
       top--;

      //return item;
   }
}

//check if stack is empty

 bool Stack::isEmpty()
{
   return (top < 0);
}

//void print()
//    {
//        int top;
//        for(int i=top;i>=0;i--)
//        {
//            cout<<myStack[i]<<endl;
//
//        }
//        cout<<"==================="<<endl;
//    }

// main program to demonstrate stack functions
int main()
{
   class Stack stack;
   cout<<"The Stack Push "<<endl;
   stack.push(" rubu " " cgpa 4.00");

   stack.push("Labi" "Cgpa 3.99");
   stack.push("Farabi" "Cgpa 3.98");
   stack.pop();
   stack.pop();
   stack.pop();
   stack.pop();

//   stack.push(24);
//   stack.push(25);
//   stack.push(26);
//   stack.push(27);
     //stack.pop();
    cout<<"The Stack Pop : "<<endl;
           //stack.pop();
//   while(!stack.isEmpty())
//      {
//      cout<<stack.pop()<<endl;
//      }
   return 0;
}

#include<iostream>
#define MAX 10
using namespace std;
int stack[MAX];
int top=-1;


void push()
{
    int item;
    if(top==MAX-1)
    {
        cout<<"Stack Overflow!"<<endl;
    }
    else{
        top++;
        cout<<"Enter a value to push:";
        cin>>item;
        stack[top]=item;
    }

    }
   void pop()
   {
       int item;
       if(top==-1)
       {
           cout<<"Stack Underflow"<<endl;
       }
       else
       {
           item=stack[top];
           cout<<"Popped item is:"<<item<<endl;
           top--;
       }

   }



 void display()
 {
        if(top==-1)
       {
           cout<<"Stack is Empty"<<endl;
       }
       else
       {
           cout<<"Printing Stack:";
           for(int i=0;i<=top;i++)
           {
               cout<<" "<<stack[i];
           }
           cout<<"\n";
       }
 }


int main()
{
    int index;

    while(true)
    {
    cout<<"Press 1:push 2:pop 3:display 4:exit"<<endl;
    cin>>index;
    switch(index)
    {
    case 1: push(); break;
    case 2: pop(); break;
    case 3: display(); break;
    case 4: return 0;
    }
    }
}


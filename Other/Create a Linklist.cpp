#include<bits/stdc++.h>
using namespace std;

struct List
{
    int data;
    struct List *next;

};

struct List *p,*q,*r;

int main()
{
    int x;
    p= new List;
    cout<<"Enter First Value";
        cin>>p->data;

        cout<<"Enter Next Value";
        cin>>x;
    q=p;
    while(x>0)
    {
        r=new List;
        r->data=x;
        q->next=r;
        q=q->next;
        cout<<"Enter Next Value";
        cin>>x;

    }
    q->next=NULL;
    q=p;
    while(q)
    {
        cout<<" "<<q->data;
        q=q->next;
    }
}

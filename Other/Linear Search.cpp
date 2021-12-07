#include<iostream>
using namespace std;



linear_search(int A[],int x,int n)
{
    bool found= false;
    for(int i=0;i<n;i++)
    {
        if(x==A[i])
        {
            cout<<"Element "<<x<<"found at index "<<i<<endl;
            found=true;
        }
    }
    if(!found)
    {
        cout<<"Element not found";
    }

}

int main()
{
    int n;
    cout<<"Enter array size:";
    cin>>n;
    int A[n];

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int x;
    cout<<"\nEnter Search Value:";
    cin>>x;

    linear_search(A,x,n);
}

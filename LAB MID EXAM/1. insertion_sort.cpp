#include<iostream>
using namespace std;


int insertionsort(int A[],int n)
{
    int t,j;
    for(int i=1; i<n; i++)
    {
        t=A[i];
        j=i-1;

        while(A[j]>t && j>=0)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=t;

        cout<<"Step:"<<i<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<" "<<A[i];
        }
        cout<<"\n";
    }

    cout<<"Printing sorted Elements:";
    for(int i=0; i<n; i++)
    {
        cout<<" "<<A[i];
    }

}


int main()
{
    int n;
    cout<<"Enter array size:";
    cin>>n;
    int A[n];
    cout<<"\nEnter Elements in Array:";
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }

    insertionsort(A,n);
}


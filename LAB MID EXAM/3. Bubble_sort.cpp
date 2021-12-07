#include<iostream>
using namespace std;


int bubblesort(int A[],int n)
{
    int temp,s=1;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(A[j]>A[j+1])
            {

                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;

                cout<<"Step:"<<s<<endl;
                for(int i=0; i<n; i++)
               {
                  cout<<" "<<A[i];
               }
               s++;
                 cout<<"\n";
            }
        }
    }

    cout<<"\nPrinting sorted Elements:";
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

    bubblesort(A,n);
}

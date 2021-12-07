#include<iostream>
using namespace std;


Bubble_sort(int A[],int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(A[j]>A[j+1])
            {

                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;


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
    cout<<"Enter array Size:";
    cin>>n;
    int A[n];

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    Bubble_sort(A,n);

}

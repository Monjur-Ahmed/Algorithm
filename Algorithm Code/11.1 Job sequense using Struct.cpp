#include<bits/stdc++.h>
using namespace std;

struct table{
   char id[2];
   int profit;
   int deadline;
};

bool comp(table a,table b)
{
    return a.profit>b.profit;
}

int main()
{
    int n,total=0;
    cout<<"How many Job's: ";
    cin>>n;
    struct table jobs[n];
    int slot[n],result[n],index[n],reject[n];
    for(int i=0; i<n; i++)
    {
        cout<<"Enter ID for Job "<<i+1<<" :";
        cin>>jobs[i].id;
        cout<<"Enter Profit for Job "<<i+1<<" :";
        cin>>jobs[i].profit;
        cout<<"Enter Deadline for Job "<<i+1<<" :";
        cin>>jobs[i].deadline;
        cout<<"-------------------------------------"<<endl;
    }
    sort(jobs,jobs+n,comp);

    int maxD= max_element(jobs,deadline);

    for(int i=0;i<n;i++)
    {
        slot[i]=false;
        reject[i]=true;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=jobs[i].deadline-1;j>=0;j--)
        {
            if(slot[j]==false)
            {
                result[j]=i;
                index[j]=j+1;
                slot[j]=true;
                reject[i]=false;
                break;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        if(slot[i]==true)
        {
             printf("\nJOB ID: %s   PROFIT: %d    DEADLINE: %d    SLOT[%d - %d]",jobs[result[i]].id,jobs[result[i]].profit,jobs[result[i]].deadline,(index[i]-1),index[i]);
             total+=jobs[result[i]].profit;
        }
        if(reject[i]==true)
        {
          printf("\nJOB ID: %s   PROFIT: %d    DEADLINE: %d    REJECTED",jobs[i].id,jobs[i].profit,jobs[i].deadline);
        }
    }
    cout<<"\nTotal Profit: "<<total;

}

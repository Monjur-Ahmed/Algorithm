#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"How many List: ";
    cin>>n;
    int size[n];
    cout<<"Enter sizes: ";
    for(int i=0;i<n;i++)
    {
        cin>>size[i];
    }
    priority_queue<int, vector<int>,greater<int> >q;
    for(int i = 0; i < n; i++)
    {
        q.push(size[i]);
    }
    int f,s,cost=0,temp;
    while(q.size() > 1)
    {
         f = q.top();
         q.pop();
         s = q.top();
         q.pop();
         temp = f + s;
         cost += temp;
         q.push(temp);
    }
    cout << "\nResult = "<<cost<<endl;
    return 0;
}

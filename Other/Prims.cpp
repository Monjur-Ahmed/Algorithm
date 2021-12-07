#include<bits/stdc++.h>
using namespace std;

int a,b,u,v,n,l=1;
int visited[10],m,mincost=0,cost[10][10];

int main()
{
   cout<<"Enter number of nodes:";
   cin>>n;
   cout<<"Enter the Graph:";
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>cost[i][j];
           if(cost[i][j]==0)
           {
               cost[i][j]=10000;
           }
       }
       visited[0]=1;
       cout<<"\n";

       while(1<n)
       {
           for(int i=0,m=10000;i<n;i++)
           {
               for(int j=0;j<n;j++)
               {
                   if(cost[i][j]<m)
                   {
                       if(visited[i]!=0)
                       {
                           m=cost[i][j];
                           a=u=i;
                           b=v=j;
                       }
                   }
               }
           }
           if(visited[u]==0||visited[v]==0)
           {
               cout<<"\n Edge "<<l++<<": "<<a+l<<" "<<b+l<<"cost: "<<m;
               mincost+=m;
               visited[b]=1;
           }
           cost[a][b]=cost[b][a]=10000;
       }

   }
   cout<<"\n Minimum Cost = "<<mincost;
}

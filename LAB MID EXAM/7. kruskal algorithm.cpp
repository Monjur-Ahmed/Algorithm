#include<bits/stdc++.h>
using namespace std;

int main()
{
    int graph[5][5];
    int parent[5];
    int min,u=0,v=0;
    int nEdges=1;
    int total=0;
    int x,y;


   for(int i=0;i<5;i++)
   {
       parent[i]=0;
       for(int j=0;j<5;j++)
       {
           cin>>graph[i][j];
           if(graph[i][j]==0)
           {
               graph[i][j]=999;
           }
       }

   }

   while(nEdges<5)
   {
       min=999;

       for(int i=0;i<5;i++)
       {
           for(int j=0;j<5;j++)
           {
               if(graph[i][j]<min)
               {
                   min=graph[i][j];
                   u=i;
                   v=j;
               }


           }
       }
      x=u, y=v;
       while(parent[u]!=0){
        x=parent[x];
       }
        while(parent[v]!=0){
        y=parent[y];
       }

       if(x!=y)
       {
           nEdges++;
           printf("Edge Found: %d to %d: Weight: %d\n",u,v,min);
           total+=min;
           parent[v]=u;
       }
       graph[u][v]=graph[v][u]=999;
   }

    cout<<"The weight of the MST: "<<total<<endl;

    }

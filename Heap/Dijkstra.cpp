#include<bits/stdc++.h>
using namespace std;
#define INF 999

int dijkstra(int n,int u);

int n;
int G[1][1];
int main()
{

    cout<<"Enter the number of vertices: ";
    cin >> n;
    G[n][n];

    cout<<endl<<"Enter Graph as Adjacency Matrix: "<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> G[i][j];
        }

    }
    int u;
    cout<<"\nEnter Source Node: ";
    cin>>u;
    dijkstra(n,u);
    return 0;
}

int dijkstra(int n,int u)
{

    int cost[n][n],dist[n];
    int visited[n],count,min,v,i,j;

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(G[i][j]==0)
                cost[i][j]=INF;
            else
                cost[i][j]=G[i][j];

    for(i=0; i<n; i++)
    {
        dist[i]=cost[u][i];
        visited[i]=0;
    }

    dist[u]=0;
    visited[u]=1;
    count=1;

    while(count<n-1)
    {
        min=INF;
        for(i=0; i<n; i++)
            if(dist[i]<min &&!visited[i])
            {
                min=dist[i];
                v=i;
            }

        visited[v]=1;

        for(i=0; i<n; i++)
            if(!visited[i] && min+cost[v][i]<dist[i] && cost[v][i]!=999 )
                {
                    dist[i]=min+cost[v][i];
                }
        count++;
    }

       for(i=0; i<n; i++)
        if(i!=u)
        {
            cout<<"\nDistance of node "<<i<<" = "<<dist[i];
        }
}



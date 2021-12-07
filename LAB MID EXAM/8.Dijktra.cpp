#include<bits/stdc++.h>
using namespace std;
#define INF 9999

int dijkstra(int n,int startnode);

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
    int u=0;
    dijkstra(n,u);
    return 0;
}

int dijkstra(int n,int startnode)
{

    int cost[n][n],dist[n],pred[n];
    int visited[n],count,mindist,nextnode,i,j;

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            if(G[i][j]==0)
                cost[i][j]=INF;
            else
                cost[i][j]=G[i][j];
    for(i=0; i<n; i++)
    {
        dist[i]=cost[startnode][i];
        pred[i]=startnode;
        visited[i]=0;
    }

    dist[startnode]=0;
    visited[startnode]=1;
    count=1;

    while(count<n-1)
    {
        mindist=INF;
        for(i=0; i<n; i++)
            if(dist[i]<mindist&&!visited[i])
            {
                mindist=dist[i];
                nextnode=i;
            }
        visited[nextnode]=1;
        for(i=0; i<n; i++)
            if(!visited[i])
                if(mindist+cost[nextnode][i]<dist[i])
                {
                    dist[i]=mindist+cost[nextnode][i];
                    pred[i]=nextnode;
                }
        count++;
    }

    for(i=0; i<n; i++)
        if(i!=startnode)
        {
            cout<<"\nDistance of node "<<i<<" = "<<dist[i];
        }
}



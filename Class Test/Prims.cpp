#include<bits/stdc++.h>
using namespace std;

int main()
{
    int vertex;
    cout<<"Enter number of Vertex: ";
    cin>>vertex;

    int graph[vertex][vertex];
    int visited[vertex];
    int min=999;
    int u=0,v=0,total=0;

    cout<<"Enter Graph as Adjacency matrix: ";
    for(int i=0;i<vertex;i++)
    {
        visited[i]=0;
        for(int j=0;j<vertex;j++)
        {
            cin>>graph[i][j];
            if(graph[i][j]==0)
            {
                graph[i][j]=999;
            }
        }

        }

        visited[0]=1;

        for(int counter=0;counter<vertex-1;counter++)
        {
            min=999;
            for(int i=0;i<vertex;i++)
            {
                if(visited[i]==1){
                    for(int j=0;j<vertex;j++)
                    {
                        if(visited[j]!=1){
                            if(min>graph[i][j])
                            {
                                min=graph[i][j];
                                u=i;
                                v=j;
                            }
                        }
                    }
                }
            }

            visited[v]=1;
            total+=min;
            printf("Edge Found: %d to %d: Weight: %d\n",u,v,min);
        }
        cout<<"Minimum cost of the MST: "<<total<<endl;
    }



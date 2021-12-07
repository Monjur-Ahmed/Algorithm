#include<bits/stdc++.h>
using namespace std;

int main()
{

    int graph[5][5];
    int visited[5];
    int min=999;
    int u=0,v=0,total=0;


    for(int i=0;i<5;i++)
    {
        visited[i]=0;
        for(int j=0;j<5;j++)
        {
            cin>>graph[i][j];
            if(graph[i][j]==0)
            {
                graph[i][j]=999;
            }
        }

        }

        visited[0]=1;

        for(int counter=0;counter<4;counter++)
        {
            min=999;
            for(int i=0;i<5;i++)
            {
                if(visited[i]==1){
                    for(int j=0;j<5;j++)
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
        cout<<"The weight of the MST: "<<total<<endl;
    }


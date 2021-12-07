#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of vertices: ";
    cin >> n;
    int graph[n][n];

    cout<<endl<<"Enter Graph as Adjacency Matrix: "<<endl;
    for(int i = 0; i < n; i++)
    {
         for(int j = 0; j < n; j++)
         {
              cin >> graph[i][j];
         }

    }
    for(int k = 0; k < n; k++)
    {
        for(int i = 0; i < n; i++)
        {
             for(int j = 0; j < n; j++)
            {
                 if(graph[i][k] + graph[k][j] < graph[i][j])
                 {
                    graph[i][j] = graph[i][k] + graph[k][j];
                 }

            }

        }
    }

    cout<<endl;
    cout<<"All Pair Shortest Path"<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

}


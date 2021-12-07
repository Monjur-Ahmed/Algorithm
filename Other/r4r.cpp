#include <bits/stdc++.h>
using namespace std;

#define INF 100000




int main()
{

    freopen("input.txt", "r", stdin);
    int n;
    cout<<"Enter Node Number"<<endl;
    cin>>n;

    //Take a two dimensional matrix of size n.
    int graph[n][n];

    //Input Graph Here
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            int x; cin>>x;
            if(x == 0)
            {
                graph[i][j] = INF;
            }
            else
            {
                graph[i][j] = x;
            }
        }
    }



    //Take a source node..
    cout<<"Enter Source Node 0 - "<<n<<endl;
    int s; cin>>s;

    //Dijkstra Starts Here..

    priority_queue <int, vector<int>, greater<int> > Q;
    vector<int>distance(n, INF);

    Q.push(s);
    distance[s] = 0;

    while(!Q.empty())
    {
        int u = Q.top();
        Q.pop();

        for(int i = 0; i<n; i++)
        {
            if(distance[u]+graph[u][i] < distance[i] && graph[u][i] != INF)
            {
                distance[i] = distance[u]+graph[u][i];
                Q.push(i);
            }
        }
    }


}

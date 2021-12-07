#include <bits/stdc++.h>
using namespace std;
#define INF 10000
int main()
{

    int sn;
    int v;
    cout<<"Enter Stage Number & Vertices Number"<<endl;
    cin >> sn >> v;

    int graph[v+1][v+1];
    for(int i = 1; i <= v; i++)
        for(int j = 1; j <= v;j++)
            if(i == j) graph[i][j] = 0;
            else graph[i][j] = INF;

    int sv[sn+1][v+1];
    int svn[sn+1];
    for(int i = 1; i <= sn; i++)
    {
        cout<<"Enter Vertices Number"<<endl;
        int nv; cin >> nv;
        svn[i] = nv;
        for(int j = 1; j <= nv; j++)
        {
            cin >> sv[i][j];
        }
    }
    cout<<"Enter Edge Number"<<endl;
    int e; cin >> e;

    for(int i = 1; i <= e; i++)
    {
        int a, b, c;
        cout<<"Enter node destination velue"<<endl;
        cin >> a >> b >> c;

        graph[a][b] = c;
    }

    int c[v+1]; for(int i = 1; i <= v; i++) c[i] = INF;
    int d[v+1];

    c[v] = 0;
    d[v] = v;

    for(int i = sn-1; i > 0; i--)
    {
        for(int j = 1; j <= svn[i]; j++)
        {
            int u = sv[i][j];
            int min = INF;
            int des = v;
            for(int k = u+1; k <= v; k++)
            {

                if(graph[u][k] != INF)
                {
                    if(graph[u][k] + c[k] < min)
                    {
                        min = graph[u][k] + c[k];
                        des = k;
                    }
                }
            }

            c[u] = min;
            d[u] = des;
        }
    }

    for(int i = 1 ; i <= v; i++) cout<<i<<" ";
    cout<<endl;
    for(int i = 1; i <= v; i++) cout<<c[i]<<" ";
    cout<<endl;
    for(int i = 1; i <= v; i++) cout<<d[i]<<" ";
    cout<<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define INF 999
void dijkstra(int src);

int n;
int g[1][1];
int main()
{

    cout<<"Enter the number of vertices: ";
    cin >> n;
    g[n][n];

    cout<<endl<<"Enter Graph as Adjacency Matrix: "<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> g[i][j];
        }

    }
    int src;
    cout<<"\nEnter Source Node: ";
    cin>>src;
    dijkstra(src);
    return 0;
}




int getMin(int dist[] , bool visited[]){
    int key = 0 ;
    int min = INT_MAX ;

    for(int i=0;i < n ; i++){
        if(!visited[i] && dist[i]<min){
            min = dist[i] ;
            key = i ;
        }
    }
    return key ;
}


void dijkstra(int src ){
    int dist[n],cost[n] ;
    bool visited[n] ={0} ;
    fill(dist , dist+n  , INF ) ;

    dist[src] =0 ;

    for(int g = 0  ;g<n-1 ; g++){
         int u = getMin( dist ,  visited );
         visited[u] = true ;
         cout<< " min = " << u <<endl;

         for(int v =0 ; v< n ;v++){
            if(!visited[v] && (dist[u]+cost[u][v]) <  dist[v] && cost[u][v]!=9999)
            {
                dist[v] = dist[u] + cost[u][v] ;
            }
        }
    }


   for(int i =0 ;i < n ;i++){
       cout<<"::::Distance = " << dist[i] ;
       cout<<endl;
   }
}




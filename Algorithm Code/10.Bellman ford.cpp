#include <bits/stdc++.h>
using namespace std;

int main()
{
	int v,e,x,y,weight;
	cout<<"Enter Vertex & Edge Number: "<<endl;
	cin>>v>>e;
	int graph[e+1][v+1];
	for(int i = 0; i<e; i++){
            for(int j = 0; j<v; j++){
            cin>>graph[i][j];
        }
	}
	int dist[v],src=0;
	for (int i = 0; i < v; i++)
		dist[i] = INT_MAX;
	    dist[src] = 0;
	for (int i = 0; i < v - 1; i++) {
		for (int j = 0; j < e; j++) {
			if (dist[graph[j][0]] + graph[j][2] <dist[graph[j][1]])
				dist[graph[j][1]] =
				dist[graph[j][0]] + graph[j][2];
		}
	}
	for (int i = 0; i < e; i++) {
		 x = graph[i][0];
         y = graph[i][1];
    weight = graph[i][2];
		if (dist[x] != INT_MAX &&
				dist[x] + weight < dist[y])
			cout << "Graph contains negative weight value"<< endl;
	}
	cout << "Vertex Distance from Source" << endl;
	for (int i = 0; i < v; i++)
		cout << i << "\t\t" << dist[i] << endl;
}


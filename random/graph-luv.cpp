#include<bits/stdc++.h>
using namespace std;

const int N = 1e3;
// Adjancency Matrix
int graph1[N][N];

// Adjancency List 
vector<int> graph2[N];

// Weight graph
vector<pair<int, int> > graph3[N];

int main(){
	int n, m;
	cin>>n>>m;
	// int graph[n+1][n+1] = 0;
	for(int i=0;i<m;i++){
		int x, y ;
		cin>>x>>y;
		graph1[x][y]=graph1[y][x] = 1;


		graph2[x].push_back(y);
		graph2[y].push_back(x);
	}
}
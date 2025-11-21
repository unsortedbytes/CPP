#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
vector<int> g[N];


bool vis[N];
bool dfs(int vertex){
	vis[vertex] = true;
	for(int child: g[vertex]){
		cout << "parent "<<vertex << ", child "<<child <<endl;
		if(vis[child]) continue;
		dfs(child); 
	}
	return true;
}

int main(){
	int n, m;
	cin>>n>>m;
	for(int i=0;i<=m;i++){
		int x, y;
		cin>>x>>y;
		for(int i=0;i<9;++i){
			int v1, v2;
			cin>> v1 >> v2;
			g[v1].push_back(v2);
			g[v2].push_back(v1);
		}
	}

	dfs(g[0][0]);
}
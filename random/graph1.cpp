#include<bits/stdc++.h>
using namespace std;


/*
4Node 4Edge
1 2
2 3
3 4
4 2 
*/

vector<vector<int>> g;

vector<int> visited;
void dfs(int node, int col){
	visited[node]=col;
	for(auto v:g[node]){
		if(!visited[v]){
			dfs(v, col);
		}
	}
}

void solve(){
	int n, m;
	cin>>n>>m;
	g.clear();
	visited.clear();
	g.resize(n+1);
	visited.resize(n+1,0);
	for(int i =0;i<m;i++){
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		// undirected graphh
		g[b].push_back(a);
	}

	int num_comp =0;
	int col = 1;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dfs(i, col);
			num_comp++;
			col++;
			// cout<<i<<" "<<num_comp<<endl;
		}
		
	}
	for(int i=1;i<=n;i++){
		cout<<visited[i]<<" ";
	}

	int  no_of_comp[num_comp+1]={0};
	for(int i=1;i<=n;i++){
		no_of_comp[visited[i]]++;
	} 
	cout<<endl
	for(int i=1;i<=num_comp;i++){
		cout<<no_of_comp[i]<<" ";
	}

}

int main(){
	solve();
}
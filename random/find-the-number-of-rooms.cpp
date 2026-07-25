#include<bits/stdc++.h>
using namespace std;

vector<vector<char>> graph;
vector<vector<int>> visited;
int n, m;

int dx[] = {-1, 1, 0,0};
int dy[] = {0, 0, 1, -1};

void dfs(int i, int j){
	visited[i][j] = 1;

	for(int d=0;d<4;d++){
		int ni = i + dx[d];
		int nj = j + dy[d];

		if(ni>0 && nj >0 && ni<=n && nj<=m){
			if(!visited[ni][nj] && graph[ni][nj] == '.'){
				dfs(ni, nj);
			}
		}
	}
}

void solve(){
	// int n,m;
	cin>>n>>m;

	graph.clear();
	visited.clear();
	graph.resize(n+1, vector<char>(m+1));
	visited.resize(n+1, vector<int>(m+1,0));

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>graph[i][j];
		}
	}

	int no_of_comp =0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(graph[i][j]=='.' && visited[i][j]==0){
				dfs(i,j);
				no_of_comp++;
			}
		}
	}

	cout<<no_of_comp<<endl;




}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
}
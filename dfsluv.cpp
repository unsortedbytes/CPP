#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+10;
vector<int> g[N];


bool vis[N];
bool dfs(int vertex){
	vis[vertex] = true;
	cout<<vertex<<endl;
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
	for(int i=0;i<m;i++){
		int x, y;
		cin>>x>>y;
		g[x].push_back(y);
		g[y].push_back(x);
	}

	dfs(1);
}
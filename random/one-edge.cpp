#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>g;
vector<int>visited;

void dfs(int node,int col){
	visited[node] = col;
	for(auto v:g[node]){
		if(!visited[v]){
			dfs(v,col);
		}
	}
}

void solve(){
	int n, m;
	cin>>n>>m;
	g.clear();visited.clear();
	g.resize(n+1);visited.resize(n+1,0);

	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}

	int num_comp =0;
	int col = 1;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dfs(i,col);
			num_comp++;
			col++;
		}
	}


	vector<int> sizeofcomp(num_comp+2,0);
	for(int i=1;i<=n;i++){
		sizeofcomp[visited[i]]++;
	}

	long long result =0;
	long long sum =0;
	for(int i = num_comp;i>1;i--){
		sum+=sizeofcomp[i];
		result+=(sizeofcomp[i-1]*sum);
	}

	cout<<result<<endl;


}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
}
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>graph;
vector<int> vistied;

void solve(){
	int n;
	cin>>n;
	graph.clear();
	vistied.clear();
	graph.resize(n+1);
	vistied.resize(n+1);
	for(int i=1;i<n;i++){
		int a, b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
}

signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	solve();
}
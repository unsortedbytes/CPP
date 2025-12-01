#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
bool vis[N];
bool cyclic = false;

vector<int> g[N];
void dfs(int vertex){
	vis[vertex] = true;
	for(int child:g[vertex]){
		if((vertex != child)&& vis[child]) cyclic = true;
		if(vis[child]) continue;
		dfs(child);
	}
}

int main(){
	
}
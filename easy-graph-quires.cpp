	#include<bits/stdc++.h>
	using namespace std;

	vector<vector<int>>g;
	vector<int> visited;

	void dfs(int node, int col){
		visited[node]=col;
		for(auto v:g[node]){
			if(!visited[v]){
				dfs(v,col);
			}
		}
	}

	void solve(){
		int n, m, q;
		cin>>n>>m>>q;
		g.clear();
		visited.clear();
		g.resize(n+1);
		visited.resize(n+1,0);
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			g[a].push_back(b);
			g[b].push_back(a);
		}

		int nofcomp =0;
		int col =1;
		for(int i=1;i<=n;i++){
			if(!visited[i]){
				dfs(i,col);
				nofcomp++;
				col++;
			}
		}

		vector<int> sizeofcols(col+1,0);
		for(int i=1;i<=n;i++){
			sizeofcols[visited[i]]++;
		}

		for(int i=0;i<q;i++){
			int type;
			cin>>type;
			if(type == 1){
				int x;
				cin>>x;
				cout<<sizeofcols[visited[x]]<<endl;
			}else if (type ==2) {
				int x, y;
				cin>>x>>y;
				if(visited[x]==visited[y]){
					cout<<"YES";
				}else{
					cout<<"NO";
				}
				cout<<endl;
			}
		}
	}

	int main(){
		ios_base::sync_with_stdio(0);
		cin.tie(0);cout.tie(0);
		solve();
	}
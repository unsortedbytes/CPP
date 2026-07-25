#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, x, s;
	cin>>n>>x>>s;
	string s;
	cin>>s;
	int empty = x;
	vector<vector<int>> seat(x,vector<int> (s,));
	int seat_left =n*s;
	int cnt=0;
	int current_table=0;
	int current_seat = 0;

	for(int i=0;i<n;i++){
		if(s[i]=='I'){
			if(empty>0){
				seat[empty-1][0]=1;
				current_seat++;
				cnt++;
				empty--;
				seat_left--;
			}
		}else if (s[i]=='E'){
			if(empty!=n && seat[current_table][current_seat]==0)
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
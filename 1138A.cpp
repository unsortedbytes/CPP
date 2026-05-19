#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);

	int n;
	cin>>n;
	int sushi[n];
	for(int i=0;i<n;i++){
		cin>>sushi[i];
	}
	int prev = sushi[0];
	int cnt = 1;
	vector<int> con;
	for(int i=1;i<n;i++){
		if(prev!=sushi[i]){
			con.push_back(cnt);
			prev=sushi[i];
			cnt=1;
		}else{
			cnt++;
		}
	}
	con.push_back(cnt);
	int ans=INT_MIN;

	for(int i=0;i<con.size()-1;i++){
		ans = max(ans, 2*(min(con[i],con[i+1])));
	}
	cout<<ans;
}
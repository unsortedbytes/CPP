#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	long long sum =0;
	long long min_height = v[0];
	for(int i=0;i<n;i++){
		sum +=v[i];
		long long current = sum/(i+1);
		min_height = min(min_height, current);
		cout<<min_height<<" ";
	}
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	vector<int> v;
	int low =1;
	int high = 3*n;
	for(int i=1;i<=n;i++){
		v.push_back(low);
		v.push_back(high-1);
		v.push_back(high);
		low++;
		high-=2;
	}

	for(int i=0;i<3*n;i++){
		cout<<v[i]<<" ";
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
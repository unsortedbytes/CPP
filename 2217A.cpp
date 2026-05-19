#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n, k;
	cin>>n>>k;
	long long sum=0;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		sum+=x;
	}
	if(sum%2!=0 || (n*k)%2 ==0){
		cout<<"YES";
	}else{
		cout<<"NO";
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
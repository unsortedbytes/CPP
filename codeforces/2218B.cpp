#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long sum =0;
	int max = -68;

	for(int i=0;i<7;i++){
		int x;
		cin>>x;
		if(x>max){
			max = x;
		}
		sum-=x;
	}

	sum += 2*max;
	cout<<sum<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
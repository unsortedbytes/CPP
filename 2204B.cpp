#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	stack<int> s;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(i==0){
			s.push(x);
			continue;
		}

		if(s.top()<=x){
			s.push(x);
		}
	}
	cout<<s.size()<<endl;
}


int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}